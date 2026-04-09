// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deserializeSplitMeshBreps
// Entry Point: 00940eb8
// Size: 708 bytes
// Signature: undefined __cdecl deserializeSplitMeshBreps(Brep * * param_1, vector * param_2, uint param_3, uchar * param_4)


/* SerializationHelper::deserializeSplitMeshBreps(Brep*&, std::__ndk1::vector<Brep*,
   std::__ndk1::allocator<Brep*> >&, unsigned int, unsigned char*) */

void SerializationHelper::deserializeSplitMeshBreps
               (Brep **param_1,vector *param_2,uint param_3,uchar *param_4)

{
  uchar *puVar1;
  uint *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  Brep *pBVar7;
  void *pvVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  void *pvVar13;
  size_t sVar14;
  ulong uVar15;
  
  puVar1 = param_4 + 8;
  if (param_3 < 7) {
    pBVar7 = (Brep *)BrepUtil::loadOldMeshSplitBrepFromFileBuffer
                               ((BrepFileHeader *)param_4,puVar1,true);
    *param_1 = pBVar7;
    iVar6 = BrepUtil::getOldMeshSplitBrepFileDataSize((BrepFileHeader *)param_4);
  }
  else {
    pBVar7 = (Brep *)BrepUtil::loadBrepFromFileBuffer((BrepFileHeader *)param_4,puVar1);
    *param_1 = pBVar7;
    iVar6 = BrepUtil::getBrepFileDataSize((BrepFileHeader *)param_4);
  }
  pvVar13 = *(void **)param_2;
  puVar12 = (uint *)((long)(puVar1 + ((ulong)(iVar6 + 3) & 0xfffffffc)) + 4);
  uVar5 = *(uint *)(puVar1 + ((ulong)(iVar6 + 3) & 0xfffffffc));
  uVar15 = (ulong)uVar5;
  if ((ulong)(*(long *)(param_2 + 0x10) - (long)pvVar13 >> 3) < uVar15) {
    sVar14 = *(long *)(param_2 + 8) - (long)pvVar13;
    pvVar8 = operator_new(uVar15 * 8);
    if (0 < (long)sVar14) {
      memcpy(pvVar8,pvVar13,sVar14);
    }
    *(void **)param_2 = pvVar8;
    *(size_t *)(param_2 + 8) = (long)pvVar8 + sVar14;
    *(void **)(param_2 + 0x10) = (void *)((long)pvVar8 + uVar15 * 8);
    if (pvVar13 != (void *)0x0) {
      operator_delete(pvVar13);
    }
  }
  do {
    if (uVar5 == 0) {
      return;
    }
    puVar2 = puVar12 + 2;
    if (param_3 < 7) {
      uVar9 = BrepUtil::loadOldMeshSplitBrepFromFileBuffer
                        ((BrepFileHeader *)puVar12,(uchar *)puVar2,false);
      puVar4 = *(undefined8 **)(param_2 + 8);
      if (puVar4 < *(undefined8 **)(param_2 + 0x10)) {
        *puVar4 = uVar9;
        *(undefined8 **)(param_2 + 8) = puVar4 + 1;
      }
      else {
        pvVar13 = *(void **)param_2;
        sVar14 = (long)puVar4 - (long)pvVar13;
        uVar3 = ((long)sVar14 >> 3) + 1;
        if (uVar3 >> 0x3d != 0) {
LAB_00941168:
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar10 = (long)*(undefined8 **)(param_2 + 0x10) - (long)pvVar13;
        uVar11 = (long)uVar10 >> 2;
        if (uVar3 <= uVar11) {
          uVar3 = uVar11;
        }
        if (0x7ffffffffffffff7 < uVar10) {
          uVar3 = 0x1fffffffffffffff;
        }
        if (uVar3 == 0) {
          pvVar8 = (void *)0x0;
        }
        else {
          if (uVar3 >> 0x3d != 0) {
LAB_00941170:
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          pvVar8 = operator_new(uVar3 << 3);
        }
        puVar4 = (undefined8 *)((long)pvVar8 + ((long)sVar14 >> 3) * 8);
        *puVar4 = uVar9;
        if (0 < (long)sVar14) {
          memcpy(pvVar8,pvVar13,sVar14);
        }
        *(void **)param_2 = pvVar8;
        *(undefined8 **)(param_2 + 8) = puVar4 + 1;
        *(void **)(param_2 + 0x10) = (void *)((long)pvVar8 + uVar3 * 8);
        if (pvVar13 != (void *)0x0) {
          operator_delete(pvVar13);
        }
      }
      iVar6 = BrepUtil::getOldMeshSplitBrepFileDataSize((BrepFileHeader *)puVar12);
    }
    else {
      uVar9 = BrepUtil::loadBrepFromFileBuffer((BrepFileHeader *)puVar12,(uchar *)puVar2);
      puVar4 = *(undefined8 **)(param_2 + 8);
      if (puVar4 < *(undefined8 **)(param_2 + 0x10)) {
        *puVar4 = uVar9;
        *(undefined8 **)(param_2 + 8) = puVar4 + 1;
      }
      else {
        pvVar13 = *(void **)param_2;
        sVar14 = (long)puVar4 - (long)pvVar13;
        uVar3 = ((long)sVar14 >> 3) + 1;
        if (uVar3 >> 0x3d != 0) goto LAB_00941168;
        uVar10 = (long)*(undefined8 **)(param_2 + 0x10) - (long)pvVar13;
        uVar11 = (long)uVar10 >> 2;
        if (uVar3 <= uVar11) {
          uVar3 = uVar11;
        }
        if (0x7ffffffffffffff7 < uVar10) {
          uVar3 = 0x1fffffffffffffff;
        }
        if (uVar3 == 0) {
          pvVar8 = (void *)0x0;
        }
        else {
          if (uVar3 >> 0x3d != 0) goto LAB_00941170;
          pvVar8 = operator_new(uVar3 << 3);
        }
        puVar4 = (undefined8 *)((long)pvVar8 + ((long)sVar14 >> 3) * 8);
        *puVar4 = uVar9;
        if (0 < (long)sVar14) {
          memcpy(pvVar8,pvVar13,sVar14);
        }
        *(void **)param_2 = pvVar8;
        *(undefined8 **)(param_2 + 8) = puVar4 + 1;
        *(void **)(param_2 + 0x10) = (void *)((long)pvVar8 + uVar3 * 8);
        if (pvVar13 != (void *)0x0) {
          operator_delete(pvVar13);
        }
      }
      iVar6 = BrepUtil::getBrepFileDataSize((BrepFileHeader *)puVar12);
    }
    uVar5 = (int)uVar15 - 1;
    uVar15 = (ulong)uVar5;
    puVar12 = (uint *)((long)puVar2 + (ulong)(iVar6 + 3U & 0xfffffffc));
  } while( true );
}


