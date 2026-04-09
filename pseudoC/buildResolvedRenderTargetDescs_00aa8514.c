// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildResolvedRenderTargetDescs
// Entry Point: 00aa8514
// Size: 236 bytes
// Signature: undefined __cdecl buildResolvedRenderTargetDescs(uint param_1, bool param_2, char * param_3, IRenderDevice * param_4, TextureObjectDesc * param_5, TextureObjectDesc * param_6, bool * param_7)


/* RenderDeviceUtil::buildResolvedRenderTargetDescs(unsigned int, bool, char const*, IRenderDevice*,
   TextureObjectDesc&, TextureObjectDesc&, bool&) */

void RenderDeviceUtil::buildResolvedRenderTargetDescs
               (uint param_1,bool param_2,char *param_3,IRenderDevice *param_4,
               TextureObjectDesc *param_5,TextureObjectDesc *param_6,bool *param_7)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar3 = *(uint *)(param_5 + 0x34);
  if ((uVar3 >> 8 & 1) == 0) {
    if ((*(uint *)(param_5 + 0x38) < 2) && (!param_2)) {
LAB_00aa8588:
      *param_7 = false;
      uVar4 = *(undefined8 *)param_5;
      uVar6 = *(undefined8 *)(param_5 + 0x18);
      uVar5 = *(undefined8 *)(param_5 + 0x10);
      *(uint *)(param_5 + 0x34) = uVar3 | param_1;
      *(undefined8 *)(param_6 + 8) = *(undefined8 *)(param_5 + 8);
      *(undefined8 *)param_6 = uVar4;
      *(undefined8 *)(param_6 + 0x18) = uVar6;
      *(undefined8 *)(param_6 + 0x10) = uVar5;
      uVar7 = *(undefined8 *)(param_5 + 0x30);
      uVar6 = *(undefined8 *)(param_5 + 0x48);
      uVar5 = *(undefined8 *)(param_5 + 0x40);
      uVar4 = *(undefined8 *)(param_5 + 0x50);
      uVar9 = *(undefined8 *)(param_5 + 0x28);
      uVar8 = *(undefined8 *)(param_5 + 0x20);
      *(undefined8 *)(param_6 + 0x38) = *(undefined8 *)(param_5 + 0x38);
      *(undefined8 *)(param_6 + 0x30) = uVar7;
      *(undefined8 *)(param_6 + 0x48) = uVar6;
      *(undefined8 *)(param_6 + 0x40) = uVar5;
      *(undefined8 *)(param_6 + 0x50) = uVar4;
      *(undefined8 *)(param_6 + 0x28) = uVar9;
      *(undefined8 *)(param_6 + 0x20) = uVar8;
      return;
    }
  }
  else {
    lVar2 = (**(code **)(*(long *)param_4 + 0x28))(param_4);
    bVar1 = *(char *)(lVar2 + 0xa1) == '\0';
    if ((bVar1 && *(int *)(param_5 + 0x38) == 0 || bVar1 && *(int *)(param_5 + 0x38) == 1) &&
       (!param_2)) {
      uVar3 = *(uint *)(param_5 + 0x34);
      goto LAB_00aa8588;
    }
  }
  *param_7 = true;
  uVar6 = *(undefined8 *)(param_5 + 0x30);
  uVar5 = *(undefined8 *)(param_5 + 0x48);
  uVar4 = *(undefined8 *)(param_5 + 0x40);
  uVar9 = *(undefined8 *)(param_5 + 0x18);
  uVar8 = *(undefined8 *)(param_5 + 0x10);
  uVar11 = *(undefined8 *)(param_5 + 0x28);
  uVar10 = *(undefined8 *)(param_5 + 0x20);
  *(undefined8 *)(param_6 + 0x38) = *(undefined8 *)(param_5 + 0x38);
  *(undefined8 *)(param_6 + 0x30) = uVar6;
  uVar7 = *(undefined8 *)(param_5 + 8);
  uVar6 = *(undefined8 *)param_5;
  *(undefined8 *)(param_6 + 0x48) = uVar5;
  *(undefined8 *)(param_6 + 0x40) = uVar4;
  *(undefined8 *)(param_6 + 0x18) = uVar9;
  *(undefined8 *)(param_6 + 0x10) = uVar8;
  *(undefined8 *)(param_6 + 0x28) = uVar11;
  *(undefined8 *)(param_6 + 0x20) = uVar10;
  *(uint *)(param_6 + 0x34) = param_1 | 0x90;
  *(undefined4 *)(param_6 + 0x38) = 1;
  *(undefined8 *)(param_6 + 8) = uVar7;
  *(undefined8 *)param_6 = uVar6;
  *(char **)(param_6 + 0x50) = param_3;
  return;
}


