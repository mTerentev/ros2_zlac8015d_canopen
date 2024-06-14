from setuptools import find_packages
from setuptools import setup

setup(
    name='overlord100_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('overlord100_msgs', 'overlord100_msgs.*')),
)
