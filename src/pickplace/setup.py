import os
from glob import glob
from setuptools import setup
from setuptools import find_packages

package_name = 'pickplace'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name + '/pp_library'), glob('pp_library/*.py')),
        (os.path.join('share', package_name), glob('launch/*')),
        (os.path.join('share', package_name), glob('config/*')),
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
            'pickplace = pickplace.pickplace_program:main',
            'teach_setup = pickplace.teach_setup:main',
            'modbus_server = pickplace.modbus_server:main',
            'destination_publisher = pickplace.destination_publisher:main',
            'tcp_publisher = pickplace.tcp_publisher:main'
        ],
    },
)
