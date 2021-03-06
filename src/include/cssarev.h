#ifndef __CSSAREV__
#define __CSSAREV__

#include <stdio.h>
#include <sys/mman.h>

// only one should be left uncommented
//#define MY_MACBOOK_PRO
//#define DTU_LIBRARY_PC_FEB2016
//#define DTU_LAB305_PC_FEB2016
//#define DTU_NEHALEM
#define HASWELL
// up to here

#ifdef HASWELL

#define CACHE_L3_ASSOCIATIVITY 16

#endif



#ifdef MY_MACBOOK_PRO

#define CACHE_LINE 64
#define CACHE_L1_SIZE 32768				// 32k Data Cache
#define CACHE_L2_SIZE 262144			// 256k
#define CACHE_L3_SIZE 3145728			// 3M
#define CACHE_L1_ASSOCIATIVITY 8
#define CACHE_L2_ASSOCIATIVITY 8
#define CACHE_L3_ASSOCIATIVITY 12
#define CACHE_LINE_BITS 6
#define CACHE_L1_SIZE_BITS 6
#define CACHE_L2_SIZE_BITS 9
#define CACHE_L3_SIZE_BITS 12

#define CACHE_L1_SET_OFFSET 4096		// 4K
#define CACHE_L2_SET_OFFSET 32768		// 32K
#define CACHE_L3_SET_OFFSET 262144/2	// 256K

//3MB / 12ways = 1MB / 4ways = 256KB/way


#define CACHE_LINE_MASK 0x3F

#define CACHE_L1_SET_MASK 0xFC0
#define CACHE_L2_SET_MASK 0x7FC0
#define CACHE_L3_SET_MASK 0x3FFC0

#define CACHE_L1_SIZE_MASK 0xFFF
#define CACHE_L2_SIZE_MASK 0x7FFF
#define CACHE_L3_SIZE_MASK 0x3FFFF

#endif


#ifdef DTU_LIBRARY_PC_FEB2016

#define CACHE_LINE 64
#define CACHE_L1_SIZE 32768				// 32k Data Cache
#define CACHE_L2_SIZE 262144			// 256k
#define CACHE_L3_SIZE 8388608			// 8M 3145728			// 3M
#define CACHE_L1_ASSOCIATIVITY 8
#define CACHE_L2_ASSOCIATIVITY 8
#define CACHE_L3_ASSOCIATIVITY 16
#define CACHE_LINE_BITS 6
#define CACHE_L1_SIZE_BITS 6
#define CACHE_L2_SIZE_BITS 9
#define CACHE_L3_SIZE_BITS 13

#define CACHE_L1_SET_OFFSET 4096
#define CACHE_L2_SET_OFFSET 32768
#define CACHE_L3_SET_OFFSET 524288


#define CACHE_LINE_MASK 0x3F

#define CACHE_L1_SET_MASK 0xFC0
#define CACHE_L2_SET_MASK 0x7FC0
#define CACHE_L3_SET_MASK 0x7FFC0

#define CACHE_L1_SIZE_MASK 0xFFF
#define CACHE_L2_SIZE_MASK 0x7FFF
#define CACHE_L3_SIZE_MASK 0x7FFFF

#define MEM_LOC_TE0	0x4029a0	
#define MEM_LOC_TE1	0x402da0	
#define MEM_LOC_TE2	0x4031a0	
#define MEM_LOC_TE3	0x4035a0	
#define MEM_LOC_TE4	0x4039a0	

#endif

#ifdef DTU_LAB305_PC_FEB2016

#define CACHE_LINE 64
#define CACHE_L1_SIZE 32768				// 32k Data Cache
#define CACHE_L2_SIZE 262144			// 256k
#define CACHE_L3_SIZE 6291456			// 6M 3145728			// 3M
#define CACHE_L1_ASSOCIATIVITY 8
#define CACHE_L2_ASSOCIATIVITY 8
#define CACHE_L3_ASSOCIATIVITY 12
#define CACHE_LINE_BITS 6
#define CACHE_L1_SIZE_BITS 6
#define CACHE_L2_SIZE_BITS 9
#define CACHE_L3_SIZE_BITS 13

#define CACHE_L1_SET_OFFSET 4096
#define CACHE_L2_SET_OFFSET 32768
#define CACHE_L3_SET_OFFSET 524288


#define CACHE_LINE_MASK 0x3F

#define CACHE_L1_SET_MASK 0xFC0
#define CACHE_L2_SET_MASK 0x7FC0
#define CACHE_L3_SET_MASK 0x7FFC0

#define CACHE_L1_SIZE_MASK 0xFFF
#define CACHE_L2_SIZE_MASK 0x7FFF
#define CACHE_L3_SIZE_MASK 0x7FFFF

#define MEM_LOC_TE0	0x4029a0	
#define MEM_LOC_TE1	0x402da0	
#define MEM_LOC_TE2	0x4031a0	
#define MEM_LOC_TE3	0x4035a0	
#define MEM_LOC_TE4	0x4039a0	

#endif


#ifdef DTU_NEHALEM

#define CACHE_LINE 64
#define CACHE_L1_SIZE 32768				// 32k Data Cache
#define CACHE_L2_SIZE 262144			// 256k
#define CACHE_L3_SIZE 4194304			// 4M
#define CACHE_L1_ASSOCIATIVITY 8
#define CACHE_L2_ASSOCIATIVITY 8
#define CACHE_L3_ASSOCIATIVITY 16
#define CACHE_LINE_BITS 6
#define CACHE_L1_SIZE_BITS 6
#define CACHE_L2_SIZE_BITS 9
#define CACHE_L3_SIZE_BITS 12

#define CACHE_L1_SET_OFFSET 4096		// 4K
#define CACHE_L2_SET_OFFSET 32768		// 32K
#define CACHE_L3_SET_OFFSET 262144/2	// 256K

//3MB / 12ways = 1MB / 4ways = 256KB/way


#define CACHE_LINE_MASK 0x3F

#define CACHE_L1_SET_MASK 0xFC0
#define CACHE_L2_SET_MASK 0x7FC0
#define CACHE_L3_SET_MASK 0x3FFC0

#define CACHE_L1_SIZE_MASK 0xFFF
#define CACHE_L2_SIZE_MASK 0x7FFF
#define CACHE_L3_SIZE_MASK 0x3FFFF

#endif


/*
 *
 * Core i5 (I5-2435M)
 * 
 * L1 Data/Instr Cache:
 * 32KB
 * 8sets x 4KB
 * 8sets x 64byte/line x 64B
 *
 * L2 Cache:
 * 256KB
 * 8sets x 32KB
 * 8sets x 64byte/line x 512B
 * 
 * L3 Cache: 
 * 3MB
 * 12sets x 256KB
 * 12sets x 64byte/line x 4KB
 * 
 */




#define ROBOSTNESS_LOOP 10000 //1000000000
#define CACHE_L3_THRESHOLD 800000 //800000


// MARCROS

#define TIMESTAMP_START asm volatile (".align 16\n\t" "CPUID\n\t" "CPUID\n\t" "CPUID\n\t" "RDTSC\n\t" "mov %%edx, %0\n\t" "mov %%eax, %1\n\t": "=r" (cycles_high_start), "=r" (cycles_low_start)::"%rax", "%rbx", "%rcx", "%rdx")
#define TIMESTAMP_STOP asm volatile ("RDTSCP\n\t" "mov %%edx, %0\n\t" "mov %%eax, %1\n\t" "CPUID\n\t": "=r" (cycles_high_stop), "=r" (cycles_low_stop)::"%rax", "%rbx", "%rcx", "%rdx")
//#define TIMESTAMP_START asm volatile ("RDTSCP\n\t" "mov %%edx, %0\n\t" "mov %%eax, %1\n\t": "=r" (cycles_high_start), "=r" (cycles_low_start)::"%rax", "%rbx", "%rcx", "%rdx")
//#define TIMESTAMP_STOP asm volatile ("RDTSCP\n\t" "mov %%edx, %0\n\t" "mov %%eax, %1\n\t": "=r" (cycles_high_stop), "=r" (cycles_low_stop)::"%rax", "%rbx", "%rcx", "%rdx")

#define KB(x) x*1024
#define MB(x) x*1024*1024
//#define GB(x) x*1024*1024*1024



// GLOBAL VARIABLES

unsigned int cycles_low_start;
unsigned int cycles_high_start;
unsigned int cycles_low_stop;
unsigned int cycles_high_stop;



// DECLARATIONS

unsigned long int get_global_timestamp_start(void);
unsigned long int get_global_timestamp_stop(void);

unsigned int timestamp(void);
unsigned long int timestamp_start(void);
unsigned long int timestamp_stop(void);
unsigned int timestamp_weak(void);

void printPtr2bin(void* ptr);
void ptr2bin(void* ptr, char bin[65]);
void printPtr2binSageMatrix(void* ptr);

/*
 *
 * SATTOLO ALGORITHM FUNCTIONS
 *
 */

//static 
int rand_int(int n);
//void sattolo_shuffle(volatile void **array, int n);




// VIRTUAL TO PHYSICAL

unsigned long get_pfn(void *addr);





// Nehalem Functions

volatile char **B;
volatile char **C;
volatile char **D;
volatile char **E;
volatile char **init_prime;
volatile char **init_reprime;

int nehalem_cache_slice_alg(void* addr);
int nehalem_setup(unsigned long int monline);
void nehalem_prime();
void nehalem_reprime();
unsigned long int nehalem_probe();

int ivybridge_i7_3770_cache_slice_from_virt(void* addr);
int ivybridge_i7_3770_cache_slice_alg(void* addr);
int ivybridge_i7_3770_setup(unsigned long int monline);
void ivybridge_i7_3770_prime();
void ivybridge_i7_3770_reprime();
unsigned long int ivybridge_i7_3770_probe();

int sandybridge_i5_2435m_cache_slice_from_virt(void* addr);
int sandybridge_i5_2435m_cache_slice_alg(void* addr);
int sandybridge_i5_2435m_setup(unsigned long int monline);
void sandybridge_i5_2435m_prime();
void sandybridge_i5_2435m_reprime();
unsigned long int sandybridge_i5_2435m_probe();

int sandybridge_i5_2435m_cache_slice_from_virt_m2(void* addr);
int sandybridge_i5_2435m_cache_slice_alg_m2(void* addr);
int sandybridge_i5_2435m_setup_m2(unsigned long int monline);
void sandybridge_i5_2435m_prime_m2();
void sandybridge_i5_2435m_reprime_m2();
unsigned long int sandybridge_i5_2435m_probe_m2();

int haswell_i7_4600m_cache_slice_from_virt(void* addr);
int haswell_i7_4600m_cache_slice_alg(void* addr);
int haswell_i7_4600m_setup(unsigned long int monline);
void haswell_i7_4600m_prime();
void haswell_i7_4600m_reprime();
unsigned long int haswell_i7_4600m_probe();

int skylake_i7_6700_cache_slice_from_virt(void* addr);
int skylake_i7_6700_cache_slice_alg(void* addr);
int skylake_i7_6700_setup(unsigned long int monline);
void skylake_i7_6700_prime();
void skylake_i7_6700_reprime();
unsigned long int skylake_i7_6700_probe();


#endif
