import os
from glob import glob
from setuptools import setup

package_name = 'pickplace'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*_launch.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='gy',
    maintainer_email='e0310259@u.nus.edu',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            #<executable> = <package>.<pythonscript>:<function in pyscript to run>
            'pickplace = pickplace.pickplace_program:main',
            'initialise = pickplace.initialise:main'
        ],
    },
)
