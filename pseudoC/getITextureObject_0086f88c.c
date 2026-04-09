// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getITextureObject
// Entry Point: 0086f88c
// Size: 1000 bytes
// Signature: undefined getITextureObject(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WebImageOverlay::getITextureObject() */

void WebImageOverlay::getITextureObject(void)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined auVar4 [16];
  long lVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long in_x0;
  long lVar9;
  uchar *puVar10;
  BitmapImage *this;
  ulong uVar11;
  void *pvVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  ulong uVar16;
  uint uVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined8 *puVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  undefined uVar24;
  undefined8 uVar25;
  uint local_b4;
  undefined8 local_b0;
  undefined2 local_a8;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  int local_84;
  undefined local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined4 local_64;
  char *local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  lVar9 = *(long *)(in_x0 + 0x98);
  if (lVar9 != 0) goto LAB_0086faac;
  if (((WebResourceManager::getInstance()::me & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(&WebResourceManager::getInstance()::me), iVar8 != 0)) {
                    /* try { // try from 0086fc38 to 0086fc43 has its CatchHandler @ 0086fc74 */
    WebResourceManager::WebResourceManager
              ((WebResourceManager *)WebResourceManager::getInstance()::me);
    __cxa_atexit(WebResourceManager::~WebResourceManager,WebResourceManager::getInstance()::me,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&WebResourceManager::getInstance()::me);
  }
  pcVar2 = (char *)(in_x0 + 0x79);
  pcVar3 = pcVar2;
  if ((*(byte *)(in_x0 + 0x78) & 1) != 0) {
    pcVar3 = *(char **)(in_x0 + 0x88);
  }
  puVar10 = (uchar *)WebResourceManager::getDataForUrl
                               ((WebResourceManager *)WebResourceManager::getInstance()::me,pcVar3,
                                &local_b4);
  if (puVar10 != (uchar *)0x0) {
    this = (BitmapImage *)operator_new(0x40);
    pcVar3 = pcVar2;
    if ((*(byte *)(in_x0 + 0x78) & 1) != 0) {
      pcVar3 = *(char **)(in_x0 + 0x88);
    }
                    /* try { // try from 0086f91c to 0086f92b has its CatchHandler @ 0086fc8c */
    BitmapImage::BitmapImage(this,pcVar3,puVar10,local_b4,1,0);
    uVar11 = BitmapImage::isLoaded();
    if ((uVar11 & 1) != 0) {
      if ((*(int *)(this + 0x14) == 1) && (*(int *)(this + 0x30) == 1)) {
        uVar17 = *(uint *)(this + 0x28);
        uVar11 = (ulong)uVar17;
        if (uVar17 != 0) {
          puVar23 = *(undefined8 **)(this + 0x20);
          pvVar12 = operator_new__((ulong)(uVar17 * 3));
          if (uVar17 < 8) {
LAB_0086f970:
            uVar16 = 0;
LAB_0086f974:
            uVar17 = (int)uVar16 * 3;
            lVar9 = uVar11 - uVar16;
            puVar18 = (undefined *)((long)puVar23 + uVar16);
            do {
              uVar21 = uVar17 + 1;
              uVar1 = uVar17 + 2;
              lVar9 = lVar9 + -1;
              *(undefined *)((long)pvVar12 + (ulong)uVar17) = *puVar18;
              uVar17 = uVar17 + 3;
              *(undefined *)((long)pvVar12 + (ulong)uVar21) = *puVar18;
              *(undefined *)((long)pvVar12 + (ulong)uVar1) = *puVar18;
              puVar18 = puVar18 + 1;
            } while (lVar9 != 0);
          }
          else {
            uVar19 = uVar11 - 1;
            uVar16 = 0;
            uVar22 = (uVar19 & 0xffffffff) + (uVar19 & 0xffffffff) * 2;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar19;
            bVar6 = (uVar22 & 0xffffffff00000000) != 0;
            bVar7 = SUB168(auVar4 * ZEXT816(3),8) != 0;
            uVar21 = (uint)uVar22;
            if (((((((uVar21 == 0xffffffff) || (bVar6)) || (uVar19 >> 0x20 != 0)) ||
                  ((0xfffffffd < uVar21 || (bVar6)))) ||
                 ((lVar9 = uVar19 * 3, (long)pvVar12 + 1U + lVar9 < (long)pvVar12 + 1U ||
                  ((bVar7 || ((long)pvVar12 + 2U + lVar9 < (long)pvVar12 + 2U)))))) || (bVar7)) ||
               (((void *)((long)pvVar12 + lVar9) < pvVar12 || (bVar7)))) goto LAB_0086f974;
            if ((puVar23 < (undefined8 *)((long)pvVar12 + uVar11 * 3)) &&
               (pvVar12 < (void *)((long)puVar23 + uVar11))) goto LAB_0086f970;
            if (uVar17 < 0x10) {
              uVar22 = 0;
LAB_0086fb88:
              uVar16 = uVar11 & 0xfffffff8;
              uVar19 = uVar22 * 3;
              lVar9 = uVar22 - uVar16;
              puVar20 = (undefined8 *)((long)puVar23 + uVar22);
              do {
                uVar15 = *puVar20;
                uVar22 = uVar19 & 0xfffffff8;
                uVar19 = uVar19 + 0x18;
                lVar9 = lVar9 + 8;
                uVar24 = (undefined)uVar15;
                *(undefined *)((long)pvVar12 + uVar22) = uVar24;
                *(undefined *)((long)pvVar12 + uVar22 + 1) = uVar24;
                *(undefined *)((long)pvVar12 + uVar22 + 2) = uVar24;
                uVar24 = (undefined)((ulong)uVar15 >> 8);
                *(undefined *)((long)pvVar12 + uVar22 + 3) = uVar24;
                *(undefined *)((long)pvVar12 + uVar22 + 4) = uVar24;
                *(undefined *)((long)pvVar12 + uVar22 + 5) = uVar24;
                uVar24 = (undefined)((ulong)uVar15 >> 0x10);
                *(undefined *)((long)pvVar12 + uVar22 + 6) = uVar24;
                *(undefined *)((long)pvVar12 + uVar22 + 7) = uVar24;
                *(undefined *)((long)pvVar12 + uVar22 + 8) = uVar24;
                uVar24 = (undefined)((ulong)uVar15 >> 0x18);
                *(undefined *)((long)pvVar12 + uVar22 + 9) = uVar24;
                *(undefined *)((long)pvVar12 + uVar22 + 10) = uVar24;
                *(undefined *)((long)pvVar12 + uVar22 + 0xb) = uVar24;
                uVar24 = (undefined)((ulong)uVar15 >> 0x20);
                *(undefined *)((long)pvVar12 + uVar22 + 0xc) = uVar24;
                *(undefined *)((long)pvVar12 + uVar22 + 0xd) = uVar24;
                *(undefined *)((long)pvVar12 + uVar22 + 0xe) = uVar24;
                uVar24 = (undefined)((ulong)uVar15 >> 0x28);
                *(undefined *)((long)pvVar12 + uVar22 + 0xf) = uVar24;
                *(undefined *)((long)pvVar12 + uVar22 + 0x10) = uVar24;
                *(undefined *)((long)pvVar12 + uVar22 + 0x11) = uVar24;
                uVar24 = (undefined)((ulong)uVar15 >> 0x30);
                *(undefined *)((long)pvVar12 + uVar22 + 0x12) = uVar24;
                *(undefined *)((long)pvVar12 + uVar22 + 0x13) = uVar24;
                *(undefined *)((long)pvVar12 + uVar22 + 0x14) = uVar24;
                uVar24 = (undefined)((ulong)uVar15 >> 0x38);
                *(undefined *)((long)pvVar12 + uVar22 + 0x15) = uVar24;
                *(undefined *)((long)pvVar12 + uVar22 + 0x16) = uVar24;
                *(undefined *)((long)pvVar12 + uVar22 + 0x17) = uVar24;
                puVar20 = puVar20 + 1;
              } while (lVar9 != 0);
              if (uVar16 != uVar11) goto LAB_0086f974;
            }
            else {
              uVar22 = 0;
              uVar16 = uVar11 & 0xfffffff0;
              puVar20 = puVar23;
              do {
                uVar25 = puVar20[1];
                uVar15 = *puVar20;
                uVar19 = uVar22 & 0xfffffff0;
                uVar22 = uVar22 + 0x30;
                uVar24 = (undefined)uVar15;
                *(undefined *)((long)pvVar12 + uVar19) = uVar24;
                *(undefined *)((long)pvVar12 + uVar19 + 1) = uVar24;
                *(undefined *)((long)pvVar12 + uVar19 + 2) = uVar24;
                uVar24 = (undefined)((ulong)uVar15 >> 8);
                *(undefined *)((long)pvVar12 + uVar19 + 3) = uVar24;
                *(undefined *)((long)pvVar12 + uVar19 + 4) = uVar24;
                *(undefined *)((long)pvVar12 + uVar19 + 5) = uVar24;
                uVar24 = (undefined)((ulong)uVar15 >> 0x10);
                *(undefined *)((long)pvVar12 + uVar19 + 6) = uVar24;
                *(undefined *)((long)pvVar12 + uVar19 + 7) = uVar24;
                *(undefined *)((long)pvVar12 + uVar19 + 8) = uVar24;
                uVar24 = (undefined)((ulong)uVar15 >> 0x18);
                *(undefined *)((long)pvVar12 + uVar19 + 9) = uVar24;
                *(undefined *)((long)pvVar12 + uVar19 + 10) = uVar24;
                *(undefined *)((long)pvVar12 + uVar19 + 0xb) = uVar24;
                uVar24 = (undefined)((ulong)uVar15 >> 0x20);
                *(undefined *)((long)pvVar12 + uVar19 + 0xc) = uVar24;
                *(undefined *)((long)pvVar12 + uVar19 + 0xd) = uVar24;
                *(undefined *)((long)pvVar12 + uVar19 + 0xe) = uVar24;
                uVar24 = (undefined)((ulong)uVar15 >> 0x28);
                *(undefined *)((long)pvVar12 + uVar19 + 0xf) = uVar24;
                *(undefined *)((long)pvVar12 + uVar19 + 0x10) = uVar24;
                *(undefined *)((long)pvVar12 + uVar19 + 0x11) = uVar24;
                uVar24 = (undefined)((ulong)uVar15 >> 0x30);
                *(undefined *)((long)pvVar12 + uVar19 + 0x12) = uVar24;
                *(undefined *)((long)pvVar12 + uVar19 + 0x13) = uVar24;
                *(undefined *)((long)pvVar12 + uVar19 + 0x14) = uVar24;
                uVar24 = (undefined)((ulong)uVar15 >> 0x38);
                *(undefined *)((long)pvVar12 + uVar19 + 0x15) = uVar24;
                *(undefined *)((long)pvVar12 + uVar19 + 0x16) = uVar24;
                *(undefined *)((long)pvVar12 + uVar19 + 0x17) = uVar24;
                uVar24 = (undefined)uVar25;
                *(undefined *)((long)pvVar12 + uVar19 + 0x18) = uVar24;
                *(undefined *)((long)pvVar12 + uVar19 + 0x19) = uVar24;
                *(undefined *)((long)pvVar12 + uVar19 + 0x1a) = uVar24;
                uVar24 = (undefined)((ulong)uVar25 >> 8);
                *(undefined *)((long)pvVar12 + uVar19 + 0x1b) = uVar24;
                *(undefined *)((long)pvVar12 + uVar19 + 0x1c) = uVar24;
                *(undefined *)((long)pvVar12 + uVar19 + 0x1d) = uVar24;
                uVar24 = (undefined)((ulong)uVar25 >> 0x10);
                *(undefined *)((long)pvVar12 + uVar19 + 0x1e) = uVar24;
                *(undefined *)((long)pvVar12 + uVar19 + 0x1f) = uVar24;
                *(undefined *)((long)pvVar12 + uVar19 + 0x20) = uVar24;
                uVar24 = (undefined)((ulong)uVar25 >> 0x18);
                *(undefined *)((long)pvVar12 + uVar19 + 0x21) = uVar24;
                *(undefined *)((long)pvVar12 + uVar19 + 0x22) = uVar24;
                *(undefined *)((long)pvVar12 + uVar19 + 0x23) = uVar24;
                uVar24 = (undefined)((ulong)uVar25 >> 0x20);
                *(undefined *)((long)pvVar12 + uVar19 + 0x24) = uVar24;
                *(undefined *)((long)pvVar12 + uVar19 + 0x25) = uVar24;
                *(undefined *)((long)pvVar12 + uVar19 + 0x26) = uVar24;
                uVar24 = (undefined)((ulong)uVar25 >> 0x28);
                *(undefined *)((long)pvVar12 + uVar19 + 0x27) = uVar24;
                *(undefined *)((long)pvVar12 + uVar19 + 0x28) = uVar24;
                *(undefined *)((long)pvVar12 + uVar19 + 0x29) = uVar24;
                uVar24 = (undefined)((ulong)uVar25 >> 0x30);
                *(undefined *)((long)pvVar12 + uVar19 + 0x2a) = uVar24;
                *(undefined *)((long)pvVar12 + uVar19 + 0x2b) = uVar24;
                *(undefined *)((long)pvVar12 + uVar19 + 0x2c) = uVar24;
                uVar24 = (undefined)((ulong)uVar25 >> 0x38);
                *(undefined *)((long)pvVar12 + uVar19 + 0x2d) = uVar24;
                *(undefined *)((long)pvVar12 + uVar19 + 0x2e) = uVar24;
                *(undefined *)((long)pvVar12 + uVar19 + 0x2f) = uVar24;
                puVar20 = puVar20 + 2;
              } while ((ulong)(uVar17 >> 4) * 0x30 - uVar22 != 0);
              if (uVar16 != uVar11) {
                uVar22 = uVar16;
                if ((uVar17 >> 3 & 1) == 0) goto LAB_0086f974;
                goto LAB_0086fb88;
              }
            }
          }
          *(undefined4 *)(this + 0x14) = 3;
          *(undefined4 *)(this + 0x30) = 3;
          operator_delete__(puVar23);
          *(void **)(this + 0x20) = pvVar12;
          *(int *)(this + 0x28) = *(int *)(this + 0x28) * 3;
        }
      }
      pcVar3 = pcVar2;
      if ((*(byte *)(in_x0 + 0x78) & 1) != 0) {
        pcVar3 = *(char **)(in_x0 + 0x88);
      }
      iVar8 = PixelFormatUtil::getPixelFormat(this,false,pcVar3);
      if (iVar8 != 0) {
        local_b0 = *(undefined8 *)(this + 0x20);
        local_a8 = 0;
        local_8c = 0;
        local_7c = 0x100000001;
        local_80 = 1;
        uStack_6c = 0x3f80000000000000;
        local_74 = 0;
        local_9c = *(undefined8 *)(this + 8);
        local_94 = 0x100000001;
        local_64 = 0;
        local_60 = pcVar2;
        if ((*(byte *)(in_x0 + 0x78) & 1) != 0) {
          local_60 = *(char **)(in_x0 + 0x88);
        }
        local_a4 = 0xffffffff00000000;
        local_84 = iVar8;
        RenderDeviceManager::getInstance();
        plVar13 = (long *)RenderDeviceManager::getCurrentRenderDevice();
        RenderDeviceManager::getInstance();
        plVar14 = (long *)RenderDeviceManager::getCurrentRenderDevice();
        uVar15 = (**(code **)(*plVar14 + 0x138))();
        uVar15 = (**(code **)(*plVar13 + 0x100))(plVar13,uVar15,&local_b0);
        *(undefined8 *)(in_x0 + 0x98) = uVar15;
      }
    }
    BitmapImage::~BitmapImage(this);
    operator_delete(this);
  }
  lVar9 = *(long *)(in_x0 + 0x98);
  if (lVar9 == 0) {
    lVar9 = *(long *)(*(long *)(in_x0 + 0x90) + 0x68);
  }
LAB_0086faac:
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar9);
}


