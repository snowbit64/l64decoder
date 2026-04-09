// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: load
// Entry Point: 00beee58
// Size: 480 bytes
// Signature: undefined __thiscall load(ShaderVariants * this, FlagMacro * param_1, uint param_2, IRenderDevice * param_3, char * param_4, char * param_5, ShaderStructLayout * param_6, uint param_7)


/* AdhocShader::ShaderVariants::load(AdhocShader::ShaderVariants::FlagMacro const*, unsigned int,
   IRenderDevice*, char const*, char const*, ShaderStructLayout*, unsigned int) */

ShaderVariants __thiscall
AdhocShader::ShaderVariants::load
          (ShaderVariants *this,FlagMacro *param_1,uint param_2,IRenderDevice *param_3,char *param_4
          ,char *param_5,ShaderStructLayout *param_6,uint param_7)

{
  ulong *puVar1;
  ulong *puVar2;
  size_t sVar3;
  char *__dest;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  char **ppcVar7;
  
  uVar5 = 1 << (ulong)(param_2 & 0x1f);
  uVar6 = (ulong)uVar5;
  *(uint *)(this + 0x10) = uVar5;
  puVar1 = (ulong *)operator_new__(uVar6 << 8 | 8);
  puVar2 = puVar1 + 1;
  *puVar1 = uVar6;
  puVar1 = puVar2;
  do {
    *(undefined *)puVar1 = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    puVar1[5] = 0;
    puVar1[8] = 0;
    puVar1[7] = 0;
    puVar1[10] = 0;
    puVar1[9] = 0;
    puVar1[0xc] = 0;
    puVar1[0xb] = 0;
    puVar1[0xe] = 0;
    puVar1[0xd] = 0;
    puVar1[0x10] = 0;
    puVar1[0xf] = 0;
    puVar1[0x12] = 0;
    puVar1[0x11] = 0;
    puVar1[0x14] = 0;
    puVar1[0x13] = 0;
    puVar1[0x16] = 0;
    puVar1[0x15] = 0;
    puVar1[0x18] = 0;
    puVar1[0x17] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1f] = 0;
    puVar1 = puVar1 + 0x20;
  } while (puVar1 != puVar2 + uVar6 * 0x20);
  *(ulong **)(this + 8) = puVar2;
  if (param_5 == (char *)0x0) {
    uVar5 = 1;
  }
  else {
    sVar3 = strlen(param_5);
    uVar5 = (int)sVar3 + 1;
  }
  if (param_2 != 0) {
    uVar6 = (ulong)param_2;
    ppcVar7 = (char **)(param_1 + 8);
    do {
      sVar3 = strlen(*ppcVar7);
      uVar6 = uVar6 - 1;
      uVar5 = uVar5 + (int)sVar3;
      ppcVar7 = ppcVar7 + 2;
    } while (uVar6 != 0);
  }
  __dest = (char *)operator_new__((ulong)uVar5);
  *this = (ShaderVariants)0x1;
  if (*(int *)(this + 0x10) != 0) {
    uVar6 = 0;
    do {
      if (param_5 == (char *)0x0) {
        *__dest = '\0';
      }
      else {
        strcpy(__dest,param_5);
      }
      ppcVar7 = (char **)(param_1 + 8);
      uVar4 = (ulong)param_2;
      if (param_2 != 0) {
        do {
          if ((*(uint *)(ppcVar7 + -1) & (uint)uVar6) != 0) {
            strcat(__dest,*ppcVar7);
          }
          uVar4 = uVar4 - 1;
          ppcVar7 = ppcVar7 + 2;
        } while (uVar4 != 0);
      }
      uVar4 = AdhocShader::load((AdhocShader *)(*(long *)(this + 8) + uVar6 * 0x100),param_3,param_4
                                ,__dest,(uint)uVar6,param_6,param_7);
      if ((uVar4 & 1) == 0) {
        *this = (ShaderVariants)0x0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(this + 0x10));
  }
  operator_delete__(__dest);
  return *this;
}


