// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decompressAllShaders
// Entry Point: 00bf6aac
// Size: 244 bytes
// Signature: undefined __thiscall decompressAllShaders(CompiledShaderArchive * this, ulonglong * param_1, uint * param_2)


/* CompiledShaderArchive::decompressAllShaders(unsigned long long&, unsigned int&) */

void __thiscall
CompiledShaderArchive::decompressAllShaders
          (CompiledShaderArchive *this,ulonglong *param_1,uint *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulonglong local_78;
  ShaderStructLayout *pSStack_70;
  uint uStack_64;
  IProgramObject *pIStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *param_1 = 0;
  *param_2 = 0;
  lVar4 = *(long *)(this + 0x18);
  lVar3 = *(long *)(this + 0x20);
  if (lVar3 != lVar4) {
    uVar5 = 0;
    do {
      if (*(long *)(lVar4 + uVar5 * 0x18) == 0) {
        uVar2 = getProgram(this,(uint)uVar5,&pIStack_60,&uStack_64,&pSStack_70,&local_78);
        if ((uVar2 & 1) != 0) {
          *param_1 = *param_1 + local_78;
          *param_2 = *param_2 + 1;
        }
        lVar4 = *(long *)(this + 0x18);
        lVar3 = *(long *)(this + 0x20);
      }
      uVar5 = (ulong)((uint)uVar5 + 1);
      uVar2 = (lVar3 - lVar4 >> 3) * -0x5555555555555555;
    } while (uVar5 <= uVar2 && uVar2 - uVar5 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


