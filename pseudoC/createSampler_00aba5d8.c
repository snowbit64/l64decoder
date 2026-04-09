// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createSampler
// Entry Point: 00aba5d8
// Size: 284 bytes
// Signature: undefined __cdecl createSampler(SamplerObjectDesc * param_1, VkDevice_T * param_2)


/* VulkanSamplerObject::createSampler(SamplerObjectDesc const&, VkDevice_T*) */

void VulkanSamplerObject::createSampler(SamplerObjectDesc *param_1,VkDevice_T *param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined4 local_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  uint local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_78[0] = 0x1f;
  local_4c = *(undefined4 *)(param_1 + 0x14);
  local_70 = 0;
  uVar1 = *(uint *)param_1;
  local_48 = 0;
  uVar5 = NEON_cmeq(*(undefined8 *)(param_1 + 4),0x100000001,4);
  uVar4 = NEON_cmeq(*(undefined8 *)(param_1 + 4),0,4);
  uVar5 = NEON_bif(0x100000001,0x200000002,uVar5,1);
  uVar3 = 1;
  if (*(int *)(param_1 + 0xc) != 1) {
    uVar3 = 2;
  }
  local_50 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    local_50 = uVar3;
  }
  local_58 = CONCAT17((byte)((ulong)uVar5 >> 0x38) & ~(byte)((ulong)uVar4 >> 0x38),
                      CONCAT16((byte)((ulong)uVar5 >> 0x30) & ~(byte)((ulong)uVar4 >> 0x30),
                               CONCAT15((byte)((ulong)uVar5 >> 0x28) & ~(byte)((ulong)uVar4 >> 0x28)
                                        ,CONCAT14((byte)((ulong)uVar5 >> 0x20) &
                                                  ~(byte)((ulong)uVar4 >> 0x20),
                                                  CONCAT13((byte)((ulong)uVar5 >> 0x18) &
                                                           ~(byte)((ulong)uVar4 >> 0x18),
                                                           CONCAT12((byte)((ulong)uVar5 >> 0x10) &
                                                                    ~(byte)((ulong)uVar4 >> 0x10),
                                                                    CONCAT11((byte)((ulong)uVar5 >>
                                                                                   8) &
                                                                             ~(byte)((ulong)uVar4 >>
                                                                                    8),
                                                                             (byte)uVar5 &
                                                                             ~(byte)uVar4)))))));
  uStack_64 = (uint)(uVar1 - 1 < 3);
  local_68 = 0;
  uStack_5c = (uint)((uVar1 & 0xfffffffe) == 2);
  if (uVar1 == 3) {
    uVar3 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x10));
    local_48 = CONCAT44(uVar3,1);
  }
  local_40 = (uint)(byte)param_1[0x18];
  uStack_3c = 0;
  if (local_40 != 0) {
    uStack_3c = 6;
  }
  local_38 = 0x447a000000000000;
  local_30 = 0;
  local_60 = uStack_64;
  (*vkCreateSampler)(param_2,local_78,0,&local_80);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_80);
}


