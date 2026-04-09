// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serializeShaderPrg
// Entry Point: 00bf235c
// Size: 392 bytes
// Signature: undefined __thiscall serializeShaderPrg(ShaderManager * this, uchar * * param_1, uint * param_2, ShaderHash * param_3, uint param_4, uchar * param_5, ShaderHash * param_6, uint param_7, uchar * param_8, ShaderHash * param_9, uint param_10, uchar * param_11, vector * param_12)


/* ShaderManager::serializeShaderPrg(unsigned char*&, unsigned int&,
   CompiledShaderArchive::ShaderHash const&, unsigned int, unsigned char const*,
   CompiledShaderArchive::ShaderHash const&, unsigned int, unsigned char const*,
   CompiledShaderArchive::ShaderHash const&, unsigned int, unsigned char const*,
   std::__ndk1::vector<ShaderStructLayout, std::__ndk1::allocator<ShaderStructLayout> >&) */

void __thiscall
ShaderManager::serializeShaderPrg
          (ShaderManager *this,uchar **param_1,uint *param_2,ShaderHash *param_3,uint param_4,
          uchar *param_5,ShaderHash *param_6,uint param_7,uchar *param_8,ShaderHash *param_9,
          uint param_10,uchar *param_11,vector *param_12)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  ShaderStructLayout *this_00;
  undefined4 *puVar6;
  undefined8 *__dest;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar7 = *(long *)param_12;
  lVar5 = *(long *)(param_12 + 8);
  uVar4 = 0x10;
  *param_2 = 0x10;
  if (lVar7 != lVar5) {
    do {
      iVar1 = ShaderStructLayout::getSerializeSize();
      lVar7 = lVar7 + 0x40;
      lVar5 = *(long *)(param_12 + 8);
      uVar4 = *param_2 + iVar1;
      *param_2 = uVar4;
    } while (lVar7 != lVar5);
  }
  uVar4 = param_4 + param_7 + param_10 + uVar4 + 0x30;
  *param_2 = uVar4;
  puVar2 = (undefined8 *)operator_new__((ulong)uVar4);
  *param_1 = (uchar *)puVar2;
  memset(puVar2,0,(ulong)uVar4);
  uVar9 = *(undefined8 *)(param_3 + 8);
  uVar8 = *(undefined8 *)param_3;
  __dest = (undefined8 *)((long)puVar2 + 0x14);
  *(uint *)(puVar2 + 2) = param_4;
  puVar2[1] = uVar9;
  *puVar2 = uVar8;
  if (param_4 != 0) {
    memcpy(__dest,param_5,(ulong)param_4);
    __dest = (undefined8 *)((long)__dest + (ulong)param_4);
  }
  uVar9 = *(undefined8 *)(param_6 + 8);
  uVar8 = *(undefined8 *)param_6;
  puVar2 = (undefined8 *)((long)__dest + 0x14);
  *(uint *)(__dest + 2) = param_7;
  __dest[1] = uVar9;
  *__dest = uVar8;
  if (param_7 != 0) {
    memcpy(puVar2,param_8,(ulong)param_7);
    puVar2 = (undefined8 *)((long)puVar2 + (ulong)param_7);
  }
  uVar9 = *(undefined8 *)(param_9 + 8);
  uVar8 = *(undefined8 *)param_9;
  puVar6 = (undefined4 *)((long)puVar2 + 0x14);
  *(uint *)(puVar2 + 2) = param_10;
  puVar2[1] = uVar9;
  *puVar2 = uVar8;
  if (param_10 != 0) {
    memcpy(puVar6,param_11,(ulong)param_10);
    puVar6 = (undefined4 *)((long)puVar6 + (ulong)param_10);
  }
  this_00 = *(ShaderStructLayout **)param_12;
  lVar7 = *(long *)(param_12 + 8);
  *puVar6 = (int)((ulong)(lVar7 - (long)this_00) >> 6);
  if (lVar7 - (long)this_00 != 0) {
    puVar6 = puVar6 + 1;
    do {
      uVar3 = ShaderStructLayout::serialize(this_00,(uchar *)puVar6);
      puVar6 = (undefined4 *)((long)puVar6 + (uVar3 & 0xffffffff));
      this_00 = this_00 + 0x40;
    } while (this_00 != *(ShaderStructLayout **)(param_12 + 8));
  }
  return;
}


