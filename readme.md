# Homework 1
## Violet Smith 
## Jan 20, 2022

1. Outputs of the following commands:
   - uname -a output:
     - Linux osboxes 5.4.0-94-generic #106-Ubuntu SMP Thu Jan 6 23:58:14 UTC 2022 x86_64 x86_64 x86_64 GNU/Linux

   - ps -al output:
      - F S   UID     PID    PPID C PRI  NI ADDR SZ WCHAN  TTY          TIME CMD
        4 S  1000    1371    1369  1  80   0 - 105214 ep_pol tty2    00:00:04 Xorg
        0 S  1000    1390    1369  0  80   0 - 47054 poll_s tty2     00:00:00 gnome-sess
        0 R  1000    3036    2525  0  80   0 -  2853 -      pts/0    00:00:00 ps

   - cat /proc/meminfo output:
       - MemTotal:        4026360 kB
        MemFree:          878760 kB
        MemAvailable:    2393496 kB
Buffers:          181800 kB
Cached:          1603000 kB
SwapCached:            0 kB
Active:          1742976 kB
Inactive:        1163288 kB
Active(anon):    1123040 kB
Inactive(anon):   111968 kB
Active(file):     619936 kB
Inactive(file):  1051320 kB
Unevictable:          32 kB
Mlocked:              32 kB
SwapTotal:       8787964 kB
SwapFree:        8787964 kB
Dirty:                 4 kB
Writeback:             0 kB
AnonPages:       1121484 kB
Mapped:           531404 kB
Shmem:            113556 kB
KReclaimable:      92992 kB
Slab:             164872 kB
SReclaimable:      92992 kB
SUnreclaim:        71880 kB
KernelStack:        9680 kB
PageTables:        23968 kB
NFS_Unstable:          0 kB
Bounce:                0 kB
WritebackTmp:          0 kB
CommitLimit:    10801144 kB
Committed_AS:    6429956 kB
VmallocTotal:   34359738367 kB
VmallocUsed:       37204 kB
VmallocChunk:          0 kB
Percpu:              716 kB
HardwareCorrupted:     0 kB
AnonHugePages:         0 kB
ShmemHugePages:        0 kB
ShmemPmdMapped:        0 kB
FileHugePages:         0 kB
FilePmdMapped:         0 kB
CmaTotal:              0 kB
CmaFree:               0 kB
HugePages_Total:       0
HugePages_Free:        0
HugePages_Rsvd:        0
HugePages_Surp:        0
Hugepagesize:       2048 kB
Hugetlb:               0 kB
DirectMap4k:      157632 kB
DirectMap2M:     4036608 kB


- cat /proc/cpuinfo
  - processor	: 0
vendor_id	: GenuineIntel
cpu family	: 6
model		: 158
model name	: Intel(R) Core(TM) i9-9880H CPU @ 2.30GHz
stepping	: 13
cpu MHz		: 2303.998
cache size	: 16384 KB
physical id	: 0
siblings	: 1
core id		: 0
cpu cores	: 1
apicid		: 0
initial apicid	: 0
fpu		: yes
fpu_exception	: yes
cpuid level	: 22
wp		: yes
flags		: fpu vme de pse tsc msr pae mce cx8 apic sep mtrr pge mca cmov pat pse36 clflush mmx fxsr sse sse2 ht syscall nx rdtscp lm constant_tsc rep_good nopl xtopology nonstop_tsc cpuid tsc_known_freq pni pclmulqdq monitor ssse3 cx16 pcid sse4_1 sse4_2 x2apic movbe popcnt aes xsave avx rdrand hypervisor lahf_lm abm 3dnowprefetch invpcid_single pti fsgsbase avx2 invpcid rdseed clflushopt md_clear flush_l1d arch_capabilities
bugs		: cpu_meltdown spectre_v1 spectre_v2 spec_store_bypass l1tf mds swapgs itlb_multihit srbds
bogomips	: 4607.99
clflush size	: 64
cache_alignment	: 64
address sizes	: 39 bits physical, 48 bits virtual
power management:

2. The uname command can be used to find the hostname, nodename, operating system, kernel release, machine, kernel version, and processer architecture. The ps command will give you the process id, the controling terminal name, the cpu time of the process, and the name of the command used to start the process.

3. output of thr git status
   - On branch master
Your branch is up to date with 'origin/master'. nothing to commit, working tree clean


  
### C code

- if you want to add different parameters to the c code place them in the run command in the parameter 1 and parameter2 places