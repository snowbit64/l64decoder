// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: set3dSourceParameters
// Entry Point: 00e3bafc
// Size: 224 bytes
// Signature: undefined __thiscall set3dSourceParameters(Soloud * this, uint param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7)


/* SoLoud::Soloud::set3dSourceParameters(unsigned int, float, float, float, float, float, float) */

void __thiscall
SoLoud::Soloud::set3dSourceParameters
          (Soloud *this,uint param_1,float param_2,float param_3,float param_4,float param_5,
          float param_6,float param_7)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  uint *puVar4;
  ulong uVar5;
  uint local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uStack_5c = 0;
  local_60 = param_1;
  puVar3 = (uint *)voiceGroupHandleToArray(this,param_1);
  puVar4 = &local_60;
  if (puVar3 != (uint *)0x0) {
    puVar4 = puVar3;
  }
  uVar1 = *puVar4;
  while (uVar1 != 0) {
    puVar4 = puVar4 + 1;
    if (((uVar1 & 0xfff) != 0) &&
       (uVar5 = (ulong)((uVar1 & 0xfff) - 1), *(uint *)(this + uVar5 * 0x78 + 0x3550) == uVar1)) {
      *(float *)(this + uVar5 * 0x78 + 0x34e0) = param_2;
      *(float *)(this + uVar5 * 0x78 + 0x34e4) = param_3;
      *(float *)(this + uVar5 * 0x78 + 0x34e8) = param_4;
      *(float *)(this + uVar5 * 0x78 + 0x34ec) = param_5;
      *(float *)(this + uVar5 * 0x78 + 0x34f0) = param_6;
      *(float *)(this + uVar5 * 0x78 + 0x34f4) = param_7;
    }
    uVar1 = *puVar4;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


