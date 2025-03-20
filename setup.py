from setuptools import setup

# Run 'pip install --editable .' to update.

setup(
    name="cbuild",
    version="1.0",
    py_modules=["cbuild"],
    entry_points={
        "console_scripts": [
            "cbuild = cbuild:build",
            "crun = cbuild:run",
        ],
    },
)
