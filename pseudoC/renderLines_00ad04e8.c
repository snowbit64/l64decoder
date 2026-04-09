// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: renderLines
// Entry Point: 00ad04e8
// Size: 20 bytes
// Signature: undefined __cdecl renderLines(float * param_1, uint param_2, float * param_3, uint param_4, uint param_5, float param_6)


/* VulkanCommandBuffer::renderLines(float const*, unsigned int, float const*, unsigned int, unsigned
   int, float) */

void VulkanCommandBuffer::renderLines
               (float *param_1,uint param_2,float *param_3,uint param_4,uint param_5,float param_6)

{
  int in_w5;
  
                    /* WARNING: Could not recover jumptable at 0x00ad04f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x108))(param_1,param_2,param_3,param_4,param_5,2,in_w5 << 1);
  return;
}


