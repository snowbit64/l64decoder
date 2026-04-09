// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FoliageDataPlane
// Entry Point: 00a639e8
// Size: 500 bytes
// Signature: undefined __thiscall FoliageDataPlane(FoliageDataPlane * this, char * param_1, Layer * param_2, TerrainDetailTransformGroupDesc * param_3, TerrainTransformGroup * param_4, FoliageTransformGroup * param_5, uint param_6)


/* FoliageDataPlane::FoliageDataPlane(char const*, FoliageSystemDesc::Layer const&,
   TerrainDetailTransformGroupDesc const&, TerrainTransformGroup*, FoliageTransformGroup*, unsigned
   int) */

void __thiscall
FoliageDataPlane::FoliageDataPlane
          (FoliageDataPlane *this,char *param_1,Layer *param_2,
          TerrainDetailTransformGroupDesc *param_3,TerrainTransformGroup *param_4,
          FoliageTransformGroup *param_5,uint param_6)

{
  long lVar1;
  basic_string *pbVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  TerrainDataPlane::TerrainDataPlane((TerrainDataPlane *)this,2,param_1,param_3,param_4);
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined ***)this = &PTR__FoliageDataPlane_00fe3a98;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x2000000000000;
                    /* try { // try from 00a63a58 to 00a63a5f has its CatchHandler @ 00a63bf0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x88),(basic_string *)(param_2 + 0x18));
  if (*(long *)(param_2 + 0x60) != *(long *)(param_2 + 0x58)) {
    uVar7 = 0;
    do {
      pbVar2 = *(basic_string **)(this + 0xb8);
      if (pbVar2 == *(basic_string **)(this + 0xc0)) {
                    /* try { // try from 00a63a88 to 00a63a8f has its CatchHandler @ 00a63bf4 */
        std::__ndk1::
        vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::
        __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                  ((basic_string *)(this + 0xb0));
      }
      else {
                    /* try { // try from 00a63ac0 to 00a63ac7 has its CatchHandler @ 00a63bfc */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar2);
        *(basic_string **)(this + 0xb8) = pbVar2 + 6;
      }
      uVar7 = (ulong)((int)uVar7 + 1);
      uVar6 = (*(long *)(param_2 + 0x60) - *(long *)(param_2 + 0x58) >> 3) * 0x4ec4ec4ec4ec4ec5;
    } while (uVar7 <= uVar6 && uVar6 - uVar7 != 0);
  }
  uVar8 = NEON_rev64(*(undefined8 *)(this + 0x78),4);
  *(undefined8 *)(this + 0xa4) = uVar8;
  *(int *)(this + 0xa0) =
       (int)((ulong)(*(long *)(this + 0xb8) - *(long *)(this + 0xb0)) >> 3) * -0x55555555;
  if (*(long **)(this + 0x50) != (long *)0x0) {
                    /* try { // try from 00a63b0c to 00a63b6f has its CatchHandler @ 00a63bf0 */
    uVar3 = (**(code **)(**(long **)(this + 0x50) + 0x58))();
    if ((uVar3 < *(uint *)(this + 0xa8)) ||
       ((uint)(1 << (ulong)(*(uint *)(this + 0xa8) & 0x1f)) < *(int *)(this + 0xa0) + 1U)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0))
      {
                    /* try { // try from 00a63ba4 to 00a63baf has its CatchHandler @ 00a63bdc */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      lVar5 = *(long *)(this + 0x50);
      lVar1 = lVar5 + 0x31;
      if ((*(byte *)(lVar5 + 0x30) & 1) != 0) {
        lVar1 = *(long *)(lVar5 + 0x40);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Foliage (%s), not enough channels to store states.\n",lVar1);
    }
  }
  *(FoliageTransformGroup **)(this + 200) = param_5;
  *(uint *)(this + 0xd0) = param_6;
  return;
}


