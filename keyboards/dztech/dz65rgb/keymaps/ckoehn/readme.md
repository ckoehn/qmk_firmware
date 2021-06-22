## Build/Flash

`qmk` is currently not usable because the [Arch build toolchain](https://bugs.archlinux.org/task/69567)
doesn't work. Might be a good idea to use the docker environment anyway to build the firmware.

```shell
docker pull qmkfm/base_container
```

```shell
util/docker_build.sh dztech/dz65rgb/v2:ckoehn
```

```shell
dfu-programmer atmega32u4 erase --force && \
dfu-programmer atmega32u4 flash dztech_dz65rgb_v2_ckoehn.hex && \
dfu-programmer atmega32u4 reset
```
