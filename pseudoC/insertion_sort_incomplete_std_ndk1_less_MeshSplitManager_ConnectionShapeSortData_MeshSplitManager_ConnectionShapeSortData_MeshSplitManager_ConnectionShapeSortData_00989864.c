// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<std::__ndk1::__less<MeshSplitManager::ConnectionShapeSortData,MeshSplitManager::ConnectionShapeSortData>&,MeshSplitManager::ConnectionShapeSortData*>
// Entry Point: 00989864
// Size: 740 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<std::__ndk1::__less<MeshSplitManager::ConnectionShapeSortData,MeshSplitManager::ConnectionShapeSortData>&,MeshSplitManager::ConnectionShapeSortData*>(ConnectionShapeSortData * param_1, ConnectionShapeSortData * param_2, __less * param_3)


/* bool 
   std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<MeshSplitManager::ConnectionShapeSortData,
   MeshSplitManager::ConnectionShapeSortData>&,
   MeshSplitManager::ConnectionShapeSortData*>(MeshSplitManager::ConnectionShapeSortData*,
   MeshSplitManager::ConnectionShapeSortData*,
   std::__ndk1::__less<MeshSplitManager::ConnectionShapeSortData,
   MeshSplitManager::ConnectionShapeSortData>&) */

bool std::__ndk1::
     __insertion_sort_incomplete<std::__ndk1::__less<MeshSplitManager::ConnectionShapeSortData,MeshSplitManager::ConnectionShapeSortData>&,MeshSplitManager::ConnectionShapeSortData*>
               (ConnectionShapeSortData *param_1,ConnectionShapeSortData *param_2,__less *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined auVar11 [16];
  float fVar12;
  float fVar13;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    if (*(float *)(param_1 + 4) < *(float *)(param_2 + -4)) {
      uVar4 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(param_2 + -8) = uVar4;
      return true;
    }
    break;
  case 3:
    fVar12 = *(float *)(param_1 + 0xc);
    if (fVar12 <= *(float *)(param_1 + 4)) {
      if (fVar12 < *(float *)(param_2 + -4)) {
        uVar4 = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + -8);
        *(undefined8 *)(param_2 + -8) = uVar4;
        if (*(float *)(param_1 + 4) < *(float *)(param_1 + 0xc)) {
          auVar11 = NEON_ext(*(undefined (*) [16])param_1,*(undefined (*) [16])param_1,8,1);
          *(long *)(param_1 + 8) = auVar11._8_8_;
          *(long *)param_1 = auVar11._0_8_;
          return true;
        }
      }
    }
    else {
      uVar4 = *(undefined8 *)param_1;
      if (fVar12 < *(float *)(param_2 + -4)) {
        *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -8);
        *(undefined8 *)(param_2 + -8) = uVar4;
        return true;
      }
      *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 8) = uVar4;
      if ((float)((ulong)uVar4 >> 0x20) < *(float *)(param_2 + -4)) {
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + -8);
        *(undefined8 *)(param_2 + -8) = uVar4;
        return true;
      }
    }
    break;
  case 4:
    __sort4<std::__ndk1::__less<MeshSplitManager::ConnectionShapeSortData,MeshSplitManager::ConnectionShapeSortData>&,MeshSplitManager::ConnectionShapeSortData*>
              (param_1,param_1 + 8,param_1 + 0x10,param_2 + -8,param_3);
    break;
  case 5:
    __sort4<std::__ndk1::__less<MeshSplitManager::ConnectionShapeSortData,MeshSplitManager::ConnectionShapeSortData>&,MeshSplitManager::ConnectionShapeSortData*>
              (param_1,param_1 + 8,param_1 + 0x10,param_1 + 0x18,param_3);
    if (*(float *)(param_1 + 0x1c) < *(float *)(param_2 + -4)) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(param_2 + -8) = uVar4;
      if (*(float *)(param_1 + 0x14) < *(float *)(param_1 + 0x1c)) {
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        fVar12 = (float)((ulong)uVar4 >> 0x20);
        uVar7 = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)(param_1 + 0x10) = uVar4;
        *(undefined8 *)(param_1 + 0x18) = uVar7;
        if (*(float *)(param_1 + 0xc) < fVar12) {
          uVar7 = *(undefined8 *)(param_1 + 8);
          *(undefined8 *)(param_1 + 8) = uVar4;
          *(undefined8 *)(param_1 + 0x10) = uVar7;
          if (*(float *)(param_1 + 4) < fVar12) {
            uVar7 = *(undefined8 *)param_1;
            *(undefined8 *)param_1 = uVar4;
            *(undefined8 *)(param_1 + 8) = uVar7;
            return true;
          }
        }
      }
    }
    break;
  default:
    fVar13 = *(float *)(param_1 + 0xc);
    fVar12 = *(float *)(param_1 + 0x14);
    if (fVar13 <= *(float *)(param_1 + 4)) {
      if (fVar13 < fVar12) {
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        uVar7 = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(param_1 + 8) = uVar4;
        *(undefined8 *)(param_1 + 0x10) = uVar7;
        if (*(float *)(param_1 + 4) < (float)((ulong)uVar4 >> 0x20)) {
          uVar7 = *(undefined8 *)param_1;
          *(undefined8 *)param_1 = uVar4;
          goto LAB_00989a90;
        }
      }
    }
    else {
      uVar4 = *(undefined8 *)param_1;
      if (fVar12 <= fVar13) {
        *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(param_1 + 8) = uVar4;
        if ((float)((ulong)uVar4 >> 0x20) < fVar12) {
          uVar7 = *(undefined8 *)(param_1 + 0x10);
          *(undefined8 *)(param_1 + 0x10) = uVar4;
LAB_00989a90:
          *(undefined8 *)(param_1 + 8) = uVar7;
        }
      }
      else {
        uVar7 = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)(param_1 + 0x10) = uVar4;
        *(undefined8 *)param_1 = uVar7;
      }
    }
    if (param_1 + 0x18 != param_2) {
      lVar5 = 0;
      iVar6 = 0;
      puVar8 = (undefined4 *)(param_1 + 0x10);
      puVar9 = (undefined4 *)(param_1 + 0x18);
      do {
        fVar12 = (float)puVar9[1];
        if ((float)puVar8[1] < fVar12) {
          uVar2 = *puVar9;
          lVar3 = lVar5;
          do {
            lVar10 = lVar3;
            *(undefined8 *)(param_1 + lVar10 + 0x18) = *(undefined8 *)(param_1 + lVar10 + 0x10);
            puVar8 = (undefined4 *)param_1;
            if (lVar10 == -0x10) goto LAB_00989ab4;
            lVar3 = lVar10 + -8;
          } while (*(float *)(param_1 + lVar10 + 0xc) < fVar12);
          puVar8 = (undefined4 *)(param_1 + lVar10 + 0x10);
LAB_00989ab4:
          iVar6 = iVar6 + 1;
          *puVar8 = uVar2;
          puVar8[1] = fVar12;
          if (iVar6 == 8) {
            return puVar9 + 2 == (undefined4 *)param_2;
          }
        }
        puVar1 = puVar9 + 2;
        lVar5 = lVar5 + 8;
        puVar8 = puVar9;
        puVar9 = puVar1;
      } while (puVar1 != (undefined4 *)param_2);
    }
  }
  return true;
}


