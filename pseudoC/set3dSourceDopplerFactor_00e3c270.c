// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: set3dSourceDopplerFactor
// Entry Point: 00e3c270
// Size: 168 bytes
// Signature: undefined __thiscall set3dSourceDopplerFactor(Soloud * this, uint param_1, float param_2)


/* SoLoud::Soloud::set3dSourceDopplerFactor(unsigned int, float) */

void __thiscall SoLoud::Soloud::set3dSourceDopplerFactor(Soloud *this,uint param_1,float param_2)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  uint *puVar4;
  ulong uVar5;
  uint local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uStack_3c = 0;
  local_40 = param_1;
  puVar3 = (uint *)voiceGroupHandleToArray(this,param_1);
  puVar4 = &local_40;
  if (puVar3 != (uint *)0x0) {
    puVar4 = puVar3;
  }
  uVar1 = *puVar4;
  while (uVar1 != 0) {
    puVar4 = puVar4 + 1;
    if (((uVar1 & 0xfff) != 0) &&
       (uVar5 = (ulong)((uVar1 & 0xfff) - 1), *(uint *)(this + uVar5 * 0x78 + 0x3550) == uVar1)) {
      *(float *)(this + uVar5 * 0x78 + 0x3508) = param_2;
    }
    uVar1 = *puVar4;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


