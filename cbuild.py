import subprocess

COMPILER_DIR = 'C:/msys64/mingw64/bin/gcc.exe'
EXE_NAME = "main"

C_FILES = [
    'main.c',
    'common.h',
    'code_segment.h',
    'code_segment.c',
    'debug.h',
    'debug.c',
]

def build():
    words = [COMPILER_DIR] + C_FILES + ['-o', EXE_NAME]

    result = subprocess.run(' '.join(words), shell=True, text=True, capture_output=True)
    if result.stdout != '':
        print(result.stdout)
    
    if result.stderr:
        print("Error:", result.stderr)
    else:
        print("Build Success.")

def run():
    build()

    result = subprocess.run('.\\'+EXE_NAME, shell=True, text=True, capture_output=True)
    if result.stdout != '':
        print(result.stdout)
    if result.stderr:
        print("Error:", result.stderr)