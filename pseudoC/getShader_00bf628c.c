// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getShader
// Entry Point: 00bf628c
// Size: 312 bytes
// Signature: undefined __thiscall getShader(CompiledShaderArchive * this, uint param_1, uchar * param_2, SHADER_STAGE param_3, IShaderObject * * param_4, ulonglong * param_5)


/* CompiledShaderArchive::getShader(unsigned int, unsigned char const*,
   IProgramObject::SHADER_STAGE, IShaderObject*&, unsigned long long&) */

undefined8 __thiscall
CompiledShaderArchive::getShader
          (CompiledShaderArchive *this,uint param_1,uchar *param_2,SHADER_STAGE param_3,
          IShaderObject **param_4,ulonglong *param_5)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  CompiledShaderArchive **ppCVar5;
  CompiledShaderArchive **ppCVar6;
  CompiledShaderArchive **ppCVar7;
  
  ppCVar6 = (CompiledShaderArchive **)(this + 0x68);
  ppCVar7 = (CompiledShaderArchive **)*ppCVar6;
  if (ppCVar7 != (CompiledShaderArchive **)0x0) {
    ppCVar5 = ppCVar6;
    do {
      if (*(SHADER_STAGE *)(ppCVar7 + 4) == param_3) {
        if (*(uint *)((long)ppCVar7 + 0x24) == param_1) {
          uVar2 = memcmp(ppCVar7[5],param_2,(ulong)param_1);
          uVar2 = uVar2 >> 0x1f;
        }
        else {
          uVar2 = (uint)(*(uint *)((long)ppCVar7 + 0x24) < param_1);
        }
      }
      else {
        uVar2 = (uint)((int)*(SHADER_STAGE *)(ppCVar7 + 4) < (int)param_3);
      }
      lVar1 = 8;
      if (uVar2 == 0) {
        lVar1 = 0;
        ppCVar5 = ppCVar7;
      }
      ppCVar7 = *(CompiledShaderArchive ***)((long)ppCVar7 + lVar1);
    } while (ppCVar7 != (CompiledShaderArchive **)0x0);
    if (ppCVar5 != ppCVar6) {
      if (*(SHADER_STAGE *)(ppCVar5 + 4) == param_3) {
        if (*(uint *)((long)ppCVar5 + 0x24) == param_1) {
          iVar3 = memcmp(param_2,ppCVar5[5],(ulong)param_1);
          if (-1 < iVar3) {
LAB_00bf6394:
            uVar4 = getShader(this,*(uint *)(ppCVar5 + 6),param_4,param_5);
            return uVar4;
          }
        }
        else if (*(uint *)((long)ppCVar5 + 0x24) <= param_1) goto LAB_00bf6394;
      }
      else if ((int)*(SHADER_STAGE *)(ppCVar5 + 4) <= (int)param_3) goto LAB_00bf6394;
    }
  }
  return 0;
}


