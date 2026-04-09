// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applySplitShapeShaderParameterOverwrites
// Entry Point: 00985f5c
// Size: 372 bytes
// Signature: undefined __thiscall applySplitShapeShaderParameterOverwrites(MeshSplitManager * this, GsShape * param_1)


/* WARNING: Type propagation algorithm not settling */
/* MeshSplitManager::applySplitShapeShaderParameterOverwrites(GsShape*) */

void __thiscall
MeshSplitManager::applySplitShapeShaderParameterOverwrites(MeshSplitManager *this,GsShape *param_1)

{
  byte *pbVar1;
  GsMaterial **ppGVar2;
  uint uVar3;
  long lVar4;
  CustomShader *this_00;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  GsMaterial *this_01;
  long lVar8;
  long lVar9;
  uint local_7c;
  float local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (*(short *)(param_1 + 0x196) != 0) {
    ppGVar2 = (GsMaterial **)(param_1 + 0x178);
    if (*(short *)(param_1 + 0x196) != 1) {
      ppGVar2 = *(GsMaterial ***)(param_1 + 0x178);
    }
    this_01 = *ppGVar2;
    this_00 = (CustomShader *)GsMaterial::getCustomShader();
    if (this_00 != (CustomShader *)0x0) {
      lVar9 = *(long *)(this + 0x88);
      uVar6 = (*(long *)(this + 0x90) - lVar9 >> 4) * -0x5555555555555555;
      if ((int)uVar6 != 0) {
        lVar8 = 0;
        while( true ) {
          pbVar1 = (byte *)(lVar9 + lVar8);
          pbVar7 = *(byte **)(pbVar1 + 0x10);
          if ((*pbVar1 & 1) == 0) {
            pbVar7 = pbVar1 + 1;
          }
          uVar5 = CustomShader::getParameterIndex
                            (this_00,*(uint *)(this_01 + 0x88),(char *)pbVar7,&local_7c);
          if ((uVar5 & 1) != 0) {
            GsMaterial::getCustomParameter(this_01,local_7c,&local_78);
            uVar3 = *(uint *)(pbVar1 + 0x18);
            if ((uVar3 & 1) != 0) {
              local_78 = *(float *)(lVar9 + lVar8 + 0x1c);
            }
            if ((uVar3 >> 1 & 1) != 0) {
              local_74 = *(undefined4 *)(lVar9 + lVar8 + 0x20);
            }
            if ((uVar3 >> 2 & 1) != 0) {
              local_70 = *(undefined4 *)(lVar9 + lVar8 + 0x24);
            }
            if ((uVar3 >> 3 & 1) != 0) {
              local_6c = *(undefined4 *)(lVar9 + lVar8 + 0x28);
            }
            GsShape::setCustomShaderParameter(param_1,local_7c,&local_78);
          }
          if ((uVar6 & 0xffffffff) * 0x30 + -0x30 == lVar8) break;
          lVar9 = *(long *)(this + 0x88);
          lVar8 = lVar8 + 0x30;
        }
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


