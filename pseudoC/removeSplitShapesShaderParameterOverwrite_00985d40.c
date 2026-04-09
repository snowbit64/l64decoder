// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeSplitShapesShaderParameterOverwrite
// Entry Point: 00985d40
// Size: 352 bytes
// Signature: undefined __thiscall removeSplitShapesShaderParameterOverwrite(MeshSplitManager * this, char * param_1)


/* MeshSplitManager::removeSplitShapesShaderParameterOverwrite(char const*) */

void __thiscall
MeshSplitManager::removeSplitShapesShaderParameterOverwrite(MeshSplitManager *this,char *param_1)

{
  size_t sVar1;
  int iVar2;
  size_t sVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  lVar12 = *(long *)(this + 0x88);
  lVar11 = *(long *)(this + 0x90);
  if (lVar11 == lVar12) {
    return;
  }
  uVar10 = 0;
  do {
    pbVar8 = (byte *)(lVar12 + uVar10 * 0x30);
    sVar3 = strlen(param_1);
    sVar1 = (ulong)(*pbVar8 >> 1);
    if ((*pbVar8 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar8 + 8);
    }
    if (sVar3 == sVar1) {
                    /* try { // try from 00985dc4 to 00985dd7 has its CatchHandler @ 00985ea0 */
      iVar2 = std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              compare((ulong)pbVar8,0,(char *)0xffffffffffffffff,(ulong)param_1);
      if (iVar2 == 0) {
        puVar9 = *(undefined8 **)(this + 0x90);
        puVar6 = (undefined8 *)(*(long *)(this + 0x88) + uVar10 * 0x30);
        puVar5 = puVar6 + 6;
        puVar7 = puVar6;
        if (puVar5 != puVar9) break;
        goto LAB_00985e70;
      }
      lVar12 = *(long *)(this + 0x88);
      lVar11 = *(long *)(this + 0x90);
    }
    uVar10 = (ulong)((int)uVar10 + 1);
    uVar4 = (lVar11 - lVar12 >> 4) * -0x5555555555555555;
    if (uVar4 < uVar10 || uVar4 - uVar10 == 0) {
      return;
    }
  } while( true );
  do {
    if ((*(byte *)puVar7 & 1) != 0) {
      operator_delete((void *)puVar7[2]);
    }
    uVar13 = puVar7[6];
    puVar6 = puVar7 + 6;
    *(undefined2 *)(puVar7 + 6) = 0;
    puVar7[1] = puVar7[7];
    *puVar7 = uVar13;
    puVar7[2] = puVar7[8];
    puVar5 = puVar7 + 0xc;
    puVar7[4] = puVar7[10];
    puVar7[3] = puVar7[9];
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)(puVar7 + 0xb);
    puVar7 = puVar6;
  } while (puVar5 != puVar9);
  puVar5 = *(undefined8 **)(this + 0x90);
  if (puVar6 != puVar5) {
LAB_00985e70:
    do {
      puVar9 = puVar5 + -6;
      if ((*(byte *)puVar9 & 1) != 0) {
        operator_delete((void *)puVar5[-4]);
      }
      puVar5 = puVar9;
    } while (puVar9 != puVar6);
  }
  *(undefined8 **)(this + 0x90) = puVar6;
  return;
}


