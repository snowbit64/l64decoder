// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTextLines
// Entry Point: 006f2278
// Size: 644 bytes
// Signature: undefined __thiscall getTextLines(FontOverlayRenderer * this, float param_1, bool param_2, ADVANCE_MODE param_3, char * param_4, vector * param_5)


/* FontOverlayRenderer::getTextLines(float, bool, FontOverlayRenderer::ADVANCE_MODE, char const*,
   std::__ndk1::vector<FontOverlayRenderer::TextLine,
   std::__ndk1::allocator<FontOverlayRenderer::TextLine> >&) */

void __thiscall
FontOverlayRenderer::getTextLines
          (FontOverlayRenderer *this,float param_1,bool param_2,ADVANCE_MODE param_3,char *param_4,
          vector *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  void *pvVar9;
  size_t sVar10;
  undefined4 local_a0;
  undefined4 uStack_9c;
  int local_98;
  undefined4 uStack_94;
  undefined local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined4 uStack_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  if (!param_2) {
    param_1 = (*(float *)(this + 0x40) * param_1) / *(float *)this;
  }
  local_a0 = 0;
  uStack_9c = 0;
  local_98 = 0;
  uStack_94 = 0;
  local_8c = 0xffffffff;
  local_90 = 0;
  local_84 = 0;
  uStack_80 = 0;
  uVar5 = getNextLine(this,(PrintState *)&local_a0,param_4,param_1,param_3,*(float *)(this + 0x38),
                      (bool)this[0x3c]);
  uVar3 = uStack_9c;
  iVar4 = local_98;
  while (uStack_9c = uVar3, local_98 = iVar4, (uVar5 & 1) != 0) {
    puVar1 = *(undefined8 **)(param_5 + 8);
    if (puVar1 < *(undefined8 **)(param_5 + 0x10)) {
      *puVar1 = CONCAT44(iVar4,uVar3);
      *(undefined8 **)(param_5 + 8) = puVar1 + 1;
    }
    else {
      pvVar9 = *(void **)param_5;
      sVar10 = (long)puVar1 - (long)pvVar9;
      uVar5 = ((long)sVar10 >> 3) + 1;
      if (uVar5 >> 0x3d != 0) goto LAB_006f24e4;
      uVar7 = (long)*(undefined8 **)(param_5 + 0x10) - (long)pvVar9;
      uVar8 = (long)uVar7 >> 2;
      if (uVar5 <= uVar8) {
        uVar5 = uVar8;
      }
      if (0x7ffffffffffffff7 < uVar7) {
        uVar5 = 0x1fffffffffffffff;
      }
      if (uVar5 == 0) {
        pvVar6 = (void *)0x0;
      }
      else {
        if (uVar5 >> 0x3d != 0) goto LAB_006f24ec;
        pvVar6 = operator_new(uVar5 << 3);
      }
      puVar1 = (undefined8 *)((long)pvVar6 + ((long)sVar10 >> 3) * 8);
      *puVar1 = CONCAT44(iVar4,uVar3);
      if (0 < (long)sVar10) {
        memcpy(pvVar6,pvVar9,sVar10);
      }
      *(void **)param_5 = pvVar6;
      *(undefined8 **)(param_5 + 8) = puVar1 + 1;
      *(void **)(param_5 + 0x10) = (void *)((long)pvVar6 + uVar5 * 8);
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
      }
    }
    uVar5 = getNextLine(this,(PrintState *)&local_a0,param_4,param_1,param_3,*(float *)(this + 0x38)
                        ,(bool)this[0x3c]);
    uVar3 = uStack_9c;
    iVar4 = local_98;
  }
  if (iVar4 != 0) {
    puVar1 = *(undefined8 **)(param_5 + 8);
    if (puVar1 < *(undefined8 **)(param_5 + 0x10)) {
      *puVar1 = CONCAT44(iVar4,uVar3);
      *(undefined8 **)(param_5 + 8) = puVar1 + 1;
    }
    else {
      pvVar9 = *(void **)param_5;
      sVar10 = (long)puVar1 - (long)pvVar9;
      uVar5 = ((long)sVar10 >> 3) + 1;
      if (uVar5 >> 0x3d != 0) {
LAB_006f24e4:
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar7 = (long)*(undefined8 **)(param_5 + 0x10) - (long)pvVar9;
      uVar8 = (long)uVar7 >> 2;
      if (uVar5 <= uVar8) {
        uVar5 = uVar8;
      }
      if (0x7ffffffffffffff7 < uVar7) {
        uVar5 = 0x1fffffffffffffff;
      }
      if (uVar5 == 0) {
        pvVar6 = (void *)0x0;
      }
      else {
        if (uVar5 >> 0x3d != 0) {
LAB_006f24ec:
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        pvVar6 = operator_new(uVar5 << 3);
      }
      puVar1 = (undefined8 *)((long)pvVar6 + ((long)sVar10 >> 3) * 8);
      *puVar1 = CONCAT44(iVar4,uVar3);
      if (0 < (long)sVar10) {
        memcpy(pvVar6,pvVar9,sVar10);
      }
      *(void **)param_5 = pvVar6;
      *(undefined8 **)(param_5 + 8) = puVar1 + 1;
      *(void **)(param_5 + 0x10) = (void *)((long)pvVar6 + uVar5 * 8);
      if (pvVar9 != (void *)0x0) {
        operator_delete(pvVar9);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


