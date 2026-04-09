// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: renderPoints
// Entry Point: 00ad04fc
// Size: 20 bytes
// Signature: undefined __cdecl renderPoints(float * param_1, uint param_2, float * param_3, uint param_4, uint param_5, float param_6)


/* VulkanCommandBuffer::renderPoints(float const*, unsigned int, float const*, unsigned int,
   unsigned int, float) */

void VulkanCommandBuffer::renderPoints
               (float *param_1,uint param_2,float *param_3,uint param_4,uint param_5,float param_6)

{
  int in_w5;
  
                    /* WARNING: Could not recover jumptable at 0x00ad050c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x108))(param_1,param_2,param_3,param_4,param_5,4,in_w5 << 1);
  return;
}


