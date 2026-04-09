// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: set3dSourcePosition
// Entry Point: 00e3bf88
// Size: 192 bytes
// Signature: undefined __thiscall set3dSourcePosition(Soloud * this, uint param_1, float param_2, float param_3, float param_4)


/* SoLoud::Soloud::set3dSourcePosition(unsigned int, float, float, float) */

void __thiscall
SoLoud::Soloud::set3dSourcePosition
          (Soloud *this,uint param_1,float param_2,float param_3,float param_4)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  uint *puVar4;
  ulong uVar5;
  uint local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uStack_4c = 0;
  local_50 = param_1;
  puVar3 = (uint *)voiceGroupHandleToArray(this,param_1);
  puVar4 = &local_50;
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
    }
    uVar1 = *puVar4;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


