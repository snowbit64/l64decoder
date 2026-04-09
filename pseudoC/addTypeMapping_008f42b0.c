// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addTypeMapping
// Entry Point: 008f42b0
// Size: 1276 bytes
// Signature: undefined __thiscall addTypeMapping(TerrainLodTexture * this, DensityMapMapping * param_1, uint param_2, uint param_3, uint param_4, uint param_5, DistanceTextureDesc * param_6, bool param_7, uint param_8, uchar * param_9)


/* TerrainLodTexture::addTypeMapping(TerrainLodTexture::DensityMapMapping*, unsigned int, unsigned
   int, unsigned int, unsigned int, TerrainLodTexture::DistanceTextureDesc*, bool, unsigned int,
   unsigned char const*) */

void __thiscall
TerrainLodTexture::addTypeMapping
          (TerrainLodTexture *this,DensityMapMapping *param_1,uint param_2,uint param_3,uint param_4
          ,uint param_5,DistanceTextureDesc *param_6,bool param_7,uint param_8,uchar *param_9)

{
  char *pcVar1;
  char **ppcVar2;
  long lVar3;
  size_t __n;
  size_t sVar4;
  BitmapImage **ppBVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  uchar uVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  void *pvVar13;
  BitmapImage *this_00;
  long lVar14;
  ulong uVar15;
  char *pcVar16;
  uint *puVar17;
  ulong uVar18;
  char *pcVar19;
  undefined8 uVar20;
  void **ppvVar21;
  undefined uVar22;
  ulong __n_00;
  ulong uVar23;
  ulong uVar24;
  basic_string *pbVar25;
  BitmapImage *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  undefined8 uStack_78;
  void *local_70;
  long local_68;
  
  lVar11 = tpidr_el0;
  local_68 = *(long *)(lVar11 + 0x28);
  puVar17 = (uint *)(*(long *)(param_1 + 0x10) + (ulong)param_2 * 200 + 0xc0);
  uVar6 = *puVar17;
  if (uVar6 < 8) {
    uVar10 = 1 << (ulong)(param_4 & 0x1f);
    __n_00 = (ulong)uVar10;
    ppvVar21 = (void **)(*(long *)(param_1 + 0x10) + (ulong)param_2 * 200 + (ulong)uVar6 * 0x18);
    *puVar17 = uVar6 + 1;
    *(char *)((long)ppvVar21 + 0x12) = (char)param_3;
    *(short *)(ppvVar21 + 2) = (short)uVar10 + -1;
    pvVar13 = operator_new__(__n_00);
    *ppvVar21 = pvVar13;
    pvVar13 = operator_new__(__n_00);
    ppvVar21[1] = pvVar13;
    memset(pvVar13,0,__n_00);
    uVar24 = 0;
    do {
      if (uVar24 == 0) {
        *(undefined *)*ppvVar21 = 0xff;
      }
      else {
        uVar22 = 0xff;
        if ((uVar24 <= param_5 || param_5 != 0 && param_7) &&
           (param_6 != (DistanceTextureDesc *)0x0)) {
          uVar6 = (uint)uVar24;
          if (param_5 < uVar24) {
            uVar6 = param_5;
          }
          pbVar25 = (basic_string *)(param_6 + (ulong)(uVar6 - 1) * 0x18);
          bVar8 = *(byte *)pbVar25;
          __n = (ulong)(bVar8 >> 1);
          if ((bVar8 & 1) != 0) {
            __n = *(size_t *)(pbVar25 + 2);
          }
          if (__n == 0) {
            uVar22 = 0xff;
          }
          else {
            pcVar1 = (char *)((long)pbVar25 + 1);
            ppcVar2 = (char **)(param_6 + (ulong)(uVar6 - 1) * 0x18 + 0x10);
            lVar14 = *(long *)(this + 0x48);
            uVar15 = *(long *)(this + 0x50) - lVar14;
            if (uVar15 != 0) {
              uVar23 = 0;
              do {
                lVar3 = lVar14 + uVar23 * 0x20;
                bVar7 = *(byte *)(lVar3 + 8);
                uVar18 = (ulong)(bVar7 >> 1);
                sVar4 = uVar18;
                if ((bVar7 & 1) != 0) {
                  sVar4 = *(size_t *)(lVar3 + 0x10);
                }
                if (sVar4 == __n) {
                  pcVar16 = pcVar1;
                  if ((bVar8 & 1) != 0) {
                    pcVar16 = *ppcVar2;
                  }
                  if ((bVar7 & 1) == 0) {
                    pcVar19 = (char *)(lVar3 + 9);
                    while (*pcVar19 == *pcVar16) {
                      uVar18 = uVar18 - 1;
                      pcVar19 = pcVar19 + 1;
                      pcVar16 = pcVar16 + 1;
                      if (uVar18 == 0) goto LAB_008f4534;
                    }
                  }
                  else {
                    iVar12 = memcmp(*(void **)(lVar14 + uVar23 * 0x20 + 0x18),pcVar16,__n);
                    if (iVar12 == 0) {
LAB_008f4534:
                      uVar22 = (undefined)uVar23;
                      if (((uint)uVar23 & 0xff) != 0xff) goto LAB_008f468c;
                      break;
                    }
                  }
                }
                uVar23 = (ulong)((uint)uVar23 + 1);
              } while (uVar23 < (ulong)((long)uVar15 >> 5));
              if (0x1fc0 < uVar15) {
                if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                   iVar12 != 0)) {
                    /* try { // try from 008f4728 to 008f4733 has its CatchHandler @ 008f47b0 */
                  LogManager::LogManager
                            ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                  __cxa_atexit(LogManager::~LogManager,
                               &LogManager::getInstance()::singletonLogManager,&PTR_LOOP_00fd8de0);
                  __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
                }
                uVar22 = 0xff;
                LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                   "Error: Using too many distance textures. Maximum allowed is %u\n"
                                   ,0xff);
                goto LAB_008f468c;
              }
            }
            this_00 = (BitmapImage *)operator_new(0x40);
            pcVar19 = *ppcVar2;
            *(undefined8 *)(this_00 + 0x20) = 0;
            pcVar16 = pcVar1;
            if ((bVar8 & 1) != 0) {
              pcVar16 = pcVar19;
            }
            *this_00 = (BitmapImage)0x1;
            lVar14 = EngineManager::getInstance();
            uVar15 = TextureUtil::loadImage(pcVar16,this_00,1,*(uint *)(lVar14 + 0x1fc),false);
            if ((uVar15 & 1) == 0) {
              BitmapImage::~BitmapImage(this_00);
              operator_delete(this_00);
              if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
                 iVar12 != 0)) {
                    /* try { // try from 008f46e0 to 008f46eb has its CatchHandler @ 008f47b4 */
                LogManager::LogManager
                          ((LogManager *)&LogManager::getInstance()::singletonLogManager);
                __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager
                             ,&PTR_LOOP_00fd8de0);
                __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
              }
              if ((*(byte *)pbVar25 & 1) != 0) {
                pcVar1 = *ppcVar2;
              }
              LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                 "Error: Failed to load distance texture \'%s\'.\n",pcVar1);
              uVar22 = 0xff;
            }
            else {
              local_80[0] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                             )0x0;
              uStack_78 = 0;
              local_70 = (void *)0x0;
              local_88 = this_00;
                    /* try { // try from 008f45d8 to 008f45df has its CatchHandler @ 008f47d8 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              operator=(local_80,pbVar25);
              ppBVar5 = *(BitmapImage ***)(this + 0x50);
              uVar20 = *(undefined8 *)(this + 0x48);
              if (ppBVar5 == *(BitmapImage ***)(this + 0x58)) {
                    /* try { // try from 008f4660 to 008f466b has its CatchHandler @ 008f47d8 */
                std::__ndk1::
                vector<TerrainLodTexture::DistanceTexture,std::__ndk1::allocator<TerrainLodTexture::DistanceTexture>>
                ::__push_back_slow_path<TerrainLodTexture::DistanceTexture_const&>
                          ((vector<TerrainLodTexture::DistanceTexture,std::__ndk1::allocator<TerrainLodTexture::DistanceTexture>>
                            *)(this + 0x48),(DistanceTexture *)&local_88);
              }
              else {
                *ppBVar5 = local_88;
                    /* try { // try from 008f4600 to 008f4607 has its CatchHandler @ 008f47cc */
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string((basic_string *)(ppBVar5 + 1));
                *(BitmapImage ***)(this + 0x50) = ppBVar5 + 4;
              }
              if (((byte)local_80[0] & 1) != 0) {
                operator_delete(local_70);
              }
              uVar22 = (undefined)((uint)((int)ppBVar5 - (int)uVar20) >> 5);
            }
          }
        }
LAB_008f468c:
        *(undefined *)((long)*ppvVar21 + uVar24) = uVar22;
        if (param_8 < uVar24) {
          if (param_8 == 0) goto LAB_008f442c;
          uVar9 = param_9[param_8 - 1];
        }
        else {
          uVar9 = param_9[(uint)uVar24 - 1];
        }
        *(uchar *)((long)ppvVar21[1] + uVar24) = uVar9;
      }
LAB_008f442c:
      uVar24 = uVar24 + 1;
    } while (uVar24 != __n_00);
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar12 != 0))
    {
                    /* try { // try from 008f4770 to 008f477b has its CatchHandler @ 008f47ac */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: TerrainLodTexture can only handle %u data channels per density map type\n"
                       ,8);
  }
  if (*(long *)(lVar11 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


