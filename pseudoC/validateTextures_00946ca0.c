// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: validateTextures
// Entry Point: 00946ca0
// Size: 1632 bytes
// Signature: undefined __thiscall validateTextures(GsMaterial * this, STREAM_QUEUE param_1)


/* GsMaterial::validateTextures(StreamManager::STREAM_QUEUE) */

void __thiscall GsMaterial::validateTextures(GsMaterial *this,STREAM_QUEUE param_1)

{
  Resource *pRVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  MaterialManager *pMVar7;
  undefined8 uVar8;
  ResourceManager *pRVar9;
  Logger *pLVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  byte *pbVar14;
  ulong uVar15;
  long lVar16;
  byte *pbVar17;
  ulong uVar18;
  ulong **ppuVar19;
  ulong **ppuVar20;
  Resource *pRVar21;
  ulong *local_e0;
  GsMaterial *pGStack_d8;
  GsMaterial *local_d0;
  GsMaterial *pGStack_c8;
  char *local_c0 [4];
  char *local_a0;
  char *pcStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (this[0x160] != (GsMaterial)0x0) {
    local_c0[0] = "2d";
    local_c0[1] = &DAT_004e58f0;
    local_c0[2] = &DAT_00510115;
    local_c0[3] = "2darray";
    uVar18 = 0x8f60c8c12a4d8903;
    this[0x160] = (GsMaterial)0x0;
    local_a0 = "buffer";
    pcStack_98 = "invalid";
    lVar11 = *(long *)(this + 0x80);
    uStack_78 = 0x3f80000000000000;
    local_80 = 0;
    local_90 = 0;
    uStack_88 = 0;
    if (lVar11 != 0) {
      lVar12 = *(long *)(lVar11 + 0x110);
      uVar13 = (ulong)*(uint *)(this + 0x88);
      uVar15 = (*(long *)(lVar11 + 0x118) - lVar12 >> 5) * 0x6db6db6db6db6db7;
      if ((uVar13 <= uVar15 && uVar15 - uVar13 != 0) &&
         (lVar11 = lVar12 + uVar13 * 0xe0,
         uVar15 = *(long *)(lVar11 + 0x60) - *(long *)(lVar11 + 0x58), (int)(uVar15 >> 3) != 0)) {
        lVar11 = 0;
        lVar16 = *(long *)(this + 0x70);
        while( true ) {
          pRVar21 = *(Resource **)(lVar16 + lVar11);
          lVar12 = *(long *)(*(long *)(lVar12 + uVar13 * 0xe0 + 0x58) + lVar11);
          uVar3 = *(uint *)(lVar12 + 0x50);
          if (pRVar21 == (Resource *)0x0) {
            if (*(char *)(lVar12 + 0x31) == '\0') {
              if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                 iVar6 != 0)) {
                    /* try { // try from 00946fe0 to 00946fe7 has its CatchHandler @ 00947304 */
                pLVar10 = (Logger *)operator_new(0x38);
                    /* try { // try from 00946fec to 00946fef has its CatchHandler @ 00947300 */
                Logger::Logger(pLVar10);
                LogManager::getInstance()::singletonLogManager = pLVar10;
                __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager
                             ,&PTR_LOOP_00fd8de0);
                __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
              }
              lVar12 = *(long *)(this + 0x80);
              pbVar14 = *(byte **)(*(long *)(*(long *)(lVar12 + 0x110) +
                                             (ulong)*(uint *)(this + 0x88) * 0xe0 + 0x58) + lVar11);
              pbVar17 = *(byte **)(pbVar14 + 0x10);
              if ((*pbVar14 & 1) == 0) {
                pbVar17 = pbVar14 + 1;
              }
              lVar16 = lVar12 + 0x11;
              if ((*(byte *)(lVar12 + 0x10) & 1) != 0) {
                lVar16 = *(long *)(lVar12 + 0x20);
              }
              LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                                "Warning: Missing texture \'%s\' in \'%s\' (%s).\n",pbVar17,
                                *(undefined8 *)(this + 8),lVar16);
              pMVar7 = (MaterialManager *)MaterialManager::getInstance();
              uVar8 = MaterialManager::getSingleColorTexture
                                (pMVar7,(float *)&local_80,uVar3,param_1);
              *(undefined8 *)(*(long *)(this + 0x70) + lVar11) = uVar8;
            }
          }
          else if (uVar3 != *(uint *)(pRVar21 + 0x50)) {
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar6 != 0)) {
                    /* try { // try from 00946f8c to 00946f97 has its CatchHandler @ 00947318 */
              pLVar10 = (Logger *)operator_new(0x38);
                    /* try { // try from 00946f98 to 00946f9f has its CatchHandler @ 00947308 */
              Logger::Logger(pLVar10);
              LogManager::getInstance()::singletonLogManager = pLVar10;
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
            lVar12 = *(long *)(this + 0x80);
            pRVar1 = pRVar21 + 0x31;
            if (((byte)pRVar21[0x30] & 1) != 0) {
              pRVar1 = *(Resource **)(pRVar21 + 0x40);
            }
            lVar16 = lVar12 + 0x11;
            if ((*(byte *)(lVar12 + 0x10) & 1) != 0) {
              lVar16 = *(long *)(lVar12 + 0x20);
            }
            LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                              "Warning: Texture \'%s\' has wrong type (%s instead of %s) in \'%s\' (%s).\n"
                              ,pRVar1,local_c0[*(uint *)(pRVar21 + 0x50)],local_c0[uVar3],
                              *(undefined8 *)(this + 8),lVar16);
            pMVar7 = (MaterialManager *)MaterialManager::getInstance();
            puVar2 = &local_80;
            if ((*(ushort *)(pRVar21 + 0x48) & 4) != 0) {
              puVar2 = &local_90;
            }
            uVar8 = MaterialManager::getSingleColorTexture(pMVar7,(float *)puVar2,uVar3,param_1);
            *(undefined8 *)(*(long *)(this + 0x70) + lVar11) = uVar8;
            pRVar9 = (ResourceManager *)ResourceManager::getInstance();
            ResourceManager::release(pRVar9,pRVar21);
          }
          lVar16 = *(long *)(this + 0x70);
          uVar18 = (uVar18 ^ *(ulong *)(lVar16 + lVar11) ^ 0x12345678deadbeef) * 0x5851f42d4c957f2d
                   + 0xdead1337beef6800;
          if ((uVar15 >> 3 & 0xffffffff) * 8 + -8 == lVar11) break;
          lVar11 = lVar11 + 8;
          uVar13 = (ulong)*(uint *)(this + 0x88);
          lVar12 = *(long *)(*(long *)(this + 0x80) + 0x110);
        }
      }
    }
    lVar11 = 0;
    ppuVar19 = &local_e0;
    bVar5 = false;
    local_e0 = (ulong *)(this + 0x30);
    pGStack_d8 = this + 0x38;
    local_d0 = this + 0x40;
    pGStack_c8 = this + 0x48;
    do {
      if (*(long *)(this + 0x80) == 0) {
        pRVar21 = (Resource *)**ppuVar19;
        if (pRVar21 != (Resource *)0x0) {
          uVar13 = 0;
          ppuVar20 = ppuVar19;
          goto LAB_0094717c;
        }
      }
      else {
        lVar12 = *(long *)(*(long *)(this + 0x80) + 0x110);
        pRVar21 = (Resource *)**ppuVar19;
        uVar3 = *(uint *)(lVar12 + (ulong)*(uint *)(this + 0x88) * 0xe0 + lVar11 * 4 + 0x78);
        uVar13 = (ulong)uVar3;
        if (pRVar21 == (Resource *)0x0) {
          if (*(char *)(lVar12 + (ulong)*(uint *)(this + 0x88) * 0xe0 + lVar11 + 0x88) == '\0') {
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar6 != 0)) {
                    /* try { // try from 00947264 to 0094726b has its CatchHandler @ 0094732c */
              pLVar10 = (Logger *)operator_new(0x38);
                    /* try { // try from 00947270 to 00947273 has its CatchHandler @ 0094731c */
              Logger::Logger(pLVar10);
              LogManager::getInstance()::singletonLogManager = pLVar10;
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
            lVar16 = *(long *)(this + 0x80);
            lVar12 = lVar16 + 0x11;
            if ((*(byte *)(lVar16 + 0x10) & 1) != 0) {
              lVar12 = *(long *)(lVar16 + 0x20);
            }
            LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                              "Warning: Missing texture \'%s\' in \'%s\' (%s).\n",
                              (long)&DAT_00519cac + (long)(int)(&DAT_00519cac)[lVar11],
                              *(undefined8 *)(this + 8),lVar12);
            pMVar7 = (MaterialManager *)MaterialManager::getInstance();
            pRVar21 = (Resource *)
                      MaterialManager::getSingleColorTexture
                                (pMVar7,(float *)&local_80,uVar3,param_1);
            **ppuVar19 = (ulong)pRVar21;
            bVar5 = true;
          }
          else {
            pRVar21 = (Resource *)0x0;
          }
        }
        else {
          ppuVar20 = &local_e0 + lVar11;
LAB_0094717c:
          if ((TEX_TYPE)uVar13 != *(TEX_TYPE *)(pRVar21 + 0x50)) {
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar6 != 0)) {
                    /* try { // try from 009471a8 to 009471b3 has its CatchHandler @ 00947340 */
              pLVar10 = (Logger *)operator_new(0x38);
                    /* try { // try from 009471b4 to 009471bb has its CatchHandler @ 00947330 */
              Logger::Logger(pLVar10);
              LogManager::getInstance()::singletonLogManager = pLVar10;
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
            pRVar1 = pRVar21 + 0x31;
            if (((byte)pRVar21[0x30] & 1) != 0) {
              pRVar1 = *(Resource **)(pRVar21 + 0x40);
            }
            LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                              "Warning: Texture \'%s\' has wrong type (%s instead of %s) in \'%s\'.\n"
                              ,pRVar1,local_c0[*(uint *)(pRVar21 + 0x50)],local_c0[uVar13],
                              *(undefined8 *)(this + 8));
            pMVar7 = (MaterialManager *)MaterialManager::getInstance();
            puVar2 = &local_80;
            if ((*(ushort *)(pRVar21 + 0x48) & 4) != 0) {
              puVar2 = &local_90;
            }
            uVar13 = MaterialManager::getSingleColorTexture
                               (pMVar7,(float *)puVar2,(TEX_TYPE)uVar13,param_1);
            **ppuVar20 = uVar13;
            pRVar9 = (ResourceManager *)ResourceManager::getInstance();
            ResourceManager::release(pRVar9,pRVar21);
            pRVar21 = (Resource *)**ppuVar20;
          }
        }
      }
      lVar11 = lVar11 + 1;
      ppuVar19 = ppuVar19 + 1;
      uVar18 = (uVar18 ^ (ulong)pRVar21 ^ 0x12345678deadbeef) * 0x5851f42d4c957f2d +
               0xdead1337beef6800;
    } while (lVar11 != 4);
    uVar3 = *(uint *)(this + 0x170);
    if (bVar5) {
      initMaterialAttributes();
    }
    *(ulong *)(this + 0x168) =
         (uVar18 ^ uVar3 ^ 0x12345678deadbeef) * 0x5851f42d4c957f2d + -0x2152ecc841109800;
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


