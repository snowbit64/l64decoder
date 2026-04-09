// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00a48ee0
// Size: 460 bytes
// Signature: undefined __cdecl init(uint param_1, uint param_2, uint param_3, uint param_4, int param_5, bool param_6, float param_7)


/* Upscaler::init(unsigned int, unsigned int, unsigned int, unsigned int, int, bool, float) */

void Upscaler::init(uint param_1,uint param_2,uint param_3,uint param_4,int param_5,bool param_6,
                   float param_7)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 uVar8;
  uint uVar9;
  float fVar10;
  undefined4 in_register_00005004;
  undefined8 extraout_d0;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  uVar6 = CONCAT44(in_register_00005004,param_7);
  uVar4 = (ulong)param_1;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(char *)(uVar4 + 0x2a) == '\0') {
    bVar3 = createShaders();
    *(byte *)(uVar4 + 0x2a) = bVar3 & 1;
    uVar6 = extraout_d0;
  }
  *(undefined *)(uVar4 + 0x29) = 0;
  lVar5 = (**(code **)(**(long **)(uVar4 + 0x18) + 0x28))(uVar6);
  if ((*(char *)(lVar5 + 0x97) == '\0') ||
     (lVar5 = (**(code **)(**(long **)(uVar4 + 0x18) + 0x28))(), *(char *)(lVar5 + 0x99) == '\0')) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(*(long *)(uVar4 + 0x20) + 0x80);
  }
  uVar1 = *(uint *)(*(long *)(uVar4 + 0x20) + 0x94);
  if (uVar1 == 0) {
    uVar6 = *(undefined8 *)(uVar4 + 0x44);
  }
  else {
    *(undefined2 *)(uVar4 + 0x28) = 0x100;
    if (*(long *)(uVar4 + 0x50) == 0) {
      plVar7 = *(long **)(uVar4 + 0x18);
      local_68 = 0;
      local_70[0] = 0x10;
      local_60 = 8;
      uVar6 = (**(code **)(*plVar7 + 0x138))(plVar7);
      uVar6 = (**(code **)(*plVar7 + 0x118))(plVar7,uVar6,local_70);
      *(undefined8 *)(uVar4 + 0x50) = uVar6;
    }
    uVar6 = NEON_ucvtf(CONCAT44(param_3,param_2),4);
    uVar9 = (uint)((float)uVar6 /
                  *(float *)(HardwareScalability::s_SGSRScalingFactor + (ulong)uVar1 * 4));
    uVar6 = CONCAT44((int)((float)((ulong)uVar6 >> 0x20) /
                          *(float *)(HardwareScalability::s_SGSRScalingFactor + (ulong)uVar1 * 4)),
                     uVar9);
    fVar10 = (float)NEON_fmadd((float)(ulong)uVar9 / (float)(ulong)param_4,0x3e4ccccd,0x3f4ccccd);
    fVar10 = log2f(fVar10);
    *(float *)(uVar4 + 0x4c) = fVar10 + -0.45;
  }
  *(undefined4 *)(uVar4 + 0x3c) = uVar8;
  *(uint *)(uVar4 + 0x40) = uVar1;
  *(undefined8 *)(uVar4 + 0x34) = 0x400000005;
  *(undefined8 *)(uVar4 + 0x2c) = 0;
  *(ulong *)(uVar4 + 0x44) =
       CONCAT44((int)((ulong)uVar6 >> 0x20) + 0x10,(int)uVar6 + 0x10) & 0xffffffe0ffffffe0;
  if (*(char *)(uVar4 + 0x29) == '\0') {
    *(uint *)(uVar4 + 0x44) = param_2;
    *(uint *)(uVar4 + 0x48) = param_3;
    *(undefined4 *)(uVar4 + 0x4c) = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


