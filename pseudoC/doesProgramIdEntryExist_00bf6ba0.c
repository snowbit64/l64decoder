// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doesProgramIdEntryExist
// Entry Point: 00bf6ba0
// Size: 204 bytes
// Signature: undefined __thiscall doesProgramIdEntryExist(CompiledShaderArchive * this, uint param_1, uchar * param_2)


/* CompiledShaderArchive::doesProgramIdEntryExist(unsigned int, unsigned char const*) */

bool __thiscall
CompiledShaderArchive::doesProgramIdEntryExist
          (CompiledShaderArchive *this,uint param_1,uchar *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  CompiledShaderArchive **ppCVar4;
  CompiledShaderArchive **ppCVar5;
  CompiledShaderArchive **ppCVar6;
  
  ppCVar4 = (CompiledShaderArchive **)(this + 0x50);
  ppCVar6 = (CompiledShaderArchive **)*ppCVar4;
  if (ppCVar6 != (CompiledShaderArchive **)0x0) {
    ppCVar5 = ppCVar4;
    do {
      if (*(uint *)(ppCVar6 + 4) == param_1) {
        uVar3 = memcmp(ppCVar6[5],param_2,(ulong)param_1);
        uVar3 = uVar3 >> 0x1f;
      }
      else {
        uVar3 = (uint)(*(uint *)(ppCVar6 + 4) < param_1);
      }
      lVar1 = 8;
      if (uVar3 == 0) {
        lVar1 = 0;
        ppCVar5 = ppCVar6;
      }
      ppCVar6 = *(CompiledShaderArchive ***)((long)ppCVar6 + lVar1);
    } while (ppCVar6 != (CompiledShaderArchive **)0x0);
    if (ppCVar5 != ppCVar4) {
      if (*(uint *)(ppCVar5 + 4) == param_1) {
        iVar2 = memcmp(param_2,ppCVar5[5],(ulong)param_1);
        if (-1 < iVar2) goto LAB_00bf6c4c;
      }
      else if (*(uint *)(ppCVar5 + 4) <= param_1) goto LAB_00bf6c4c;
    }
  }
  ppCVar5 = ppCVar4;
LAB_00bf6c4c:
  return ppCVar5 != ppCVar4;
}


