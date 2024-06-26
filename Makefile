CFLAGS = -Wall -Wextra -std=gnu11 -Og -g
LDFLAGS = -L/opt/ampliphy-vendor-xwayland/BSP-Yocto-NXP-i.MX8MP-PD23.1.0/sysroots/cortexa53-crypto-phytec-linux/usr/lib
# LDLIBS = -li2c
BUILD_PATH=build
PROGRAM=hello

all: main.c
	$(CC) $(CFLAGS) $(LDFLAGS) $(LDLIBS) main.c euclidean.c euclidean_initialize.c euclidean_terminate.c -lm -o ${BUILD_PATH}/${PROGRAM}
clean:
	rm -f ${BUILD_PATH}/${PROGRAM}
