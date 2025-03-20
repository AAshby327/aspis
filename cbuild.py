import os
import subprocess

# COMPILER_DIR = 'C:/msys64/mingw64/bin/gcc.exe'
COMPILER_DIR = '/usr/bin/gcc'
EXE_NAME = "bin/main"

C_FILES = [
    'src/main.c',
    'src/code_sequence.c',
    'src/debug.c',
]

INCLUDE_DIR = '-Iinclude'

def build():
    words = [COMPILER_DIR] + C_FILES + [INCLUDE_DIR, '-o', EXE_NAME]

    result = subprocess.run(' '.join(words), shell=True, text=True, capture_output=True)
    if result.stdout != '':
        print(result.stdout)
    
    if result.stderr:
        print("Error:", result.stderr)
    else:
        print("Build Success.")

def run():
    result = subprocess.run(f'.{os.sep}{EXE_NAME}', shell=True, text=True, capture_output=True)
    if result.stdout != '':
        print(result.stdout)
    if result.stderr:
        print("Error:", result.stderr)