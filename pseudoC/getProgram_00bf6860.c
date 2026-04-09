// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getProgram
// Entry Point: 00bf6860
// Size: 276 bytes
// Signature: undefined __thiscall getProgram(CompiledShaderArchive * this, uint param_1, uchar * param_2, IProgramObject * * param_3, uint * param_4, ShaderStructLayout * * param_5, ulonglong * param_6)


/* CompiledShaderArchive::getProgram(unsigned int, unsigned char const*, IProgramObject*&, unsigned
   int&, ShaderStructLayout*&, unsigned long long&) */

undefined8 __thiscall
CompiledShaderArchive::getProgram
          (CompiledShaderArchive *this,uint param_1,uchar *param_2,IProgramObject **param_3,
          uint *param_4,ShaderStructLayout **param_5,ulonglong *param_6)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  CompiledShaderArchive **ppCVar5;
  CompiledShaderArchive **ppCVar6;
  CompiledShaderArchive **ppCVar7;
  
  ppCVar7 = (CompiledShaderArchive **)(this + 0x50);
  ppCVar5 = (CompiledShaderArchive **)*ppCVar7;
  if (ppCVar5 != (CompiledShaderArchive **)0x0) {
    ppCVar6 = ppCVar7;
    do {
      if (*(uint *)(ppCVar5 + 4) == param_1) {
        uVar4 = memcmp(ppCVar5[5],param_2,(ulong)param_1);
        uVar4 = uVar4 >> 0x1f;
      }
      else {
        uVar4 = (uint)(*(uint *)(ppCVar5 + 4) < param_1);
      }
      lVar1 = 8;
      if (uVar4 == 0) {
        lVar1 = 0;
        ppCVar6 = ppCVar5;
      }
      ppCVar5 = *(CompiledShaderArchive ***)((long)ppCVar5 + lVar1);
    } while (ppCVar5 != (CompiledShaderArchive **)0x0);
    if (ppCVar6 != ppCVar7) {
      if (*(uint *)(ppCVar6 + 4) == param_1) {
        iVar2 = memcmp(param_2,ppCVar6[5],(ulong)param_1);
        if (-1 < iVar2) {
LAB_00bf6918:
          uVar3 = getProgram(this,*(uint *)(ppCVar6 + 6),param_3,param_4,param_5,param_6);
          return uVar3;
        }
      }
      else if (*(uint *)(ppCVar6 + 4) <= param_1) goto LAB_00bf6918;
    }
  }
  return 0;
}


