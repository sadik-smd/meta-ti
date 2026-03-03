# This will have priority over generic rt path

#
# Jailhouse settings
#
COMPATIBLE_MACHINE:tie-jailhouse = "am62xx|am62pxx|am62lxx"

BRANCH:tie-jailhouse:bsp-ti-6_12 = "ti-linux-6.12.y-jailhouse"
BRANCH:tie-jailhouse:bsp-ti-6_18 = "ti-linux-6.18.y-jailhouse-wip"

SRCREV:tie-jailhouse:bsp-ti-6_12 = "229a48602ad1557612a4ffabec6a3cbcdd745f87"
SRCREV:tie-jailhouse:bsp-ti-6_18 = "262712414cf750b96f0227f8d98a93c30aeb1ce4"

KERNEL_GIT_URI:tie-jailhouse = "git://git.ti.com/git/processor-sdk/linux.git"
