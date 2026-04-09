// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeSecondaryPolyline
// Entry Point: 008cc898
// Size: 580 bytes
// Signature: undefined __thiscall computeSecondaryPolyline(FillPlaneGeometry * this, vector * param_1, uint param_2, uint param_3, vector * param_4, Brep * param_5)


/* FillPlaneGeometry::computeSecondaryPolyline(std::__ndk1::vector<unsigned int,
   std::__ndk1::allocator<unsigned int> >&, unsigned int, unsigned int,
   std::__ndk1::vector<std::__ndk1::vector<unsigned int, std::__ndk1::allocator<unsigned int> >,
   std::__ndk1::allocator<std::__ndk1::vector<unsigned int, std::__ndk1::allocator<unsigned int> > >
   > const&, Brep&) */

undefined8 __thiscall
FillPlaneGeometry::computeSecondaryPolyline
          (FillPlaneGeometry *this,vector *param_1,uint param_2,uint param_3,vector *param_4,
          Brep *param_5)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  uint *puVar7;
  long lVar8;
  uint *puVar9;
  uint **ppuVar10;
  ulong uVar11;
  
  uVar11 = (ulong)param_3;
  uVar4 = computeSinglePolyline(this,param_1,param_5,param_2,true);
  if ((uVar4 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 008cca5c to 008cca67 has its CatchHandler @ 008ccae0 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar6 = 
    "Error: No path to fill volume bottom plane from a vertex via downward edges (local minimum).\n"
    ;
LAB_008cc988:
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar6);
    uVar5 = 0;
  }
  else {
    lVar8 = *(long *)(param_5 + 0x2f68);
    uVar2 = *(ushort *)(lVar8 + (ulong)*(uint *)(*(long *)(param_1 + 8) + -4) * 8);
    if (0.01 < *(float *)(*(long *)(param_5 + 0x2ef0) +
                          (ulong)*(ushort *)(*(long *)(param_5 + 0x2f50) + (ulong)uVar2 * 0xc) *
                          0x10 + 4) - *(float *)(this + 0x9c)) {
      lVar1 = *(long *)param_4;
      ppuVar10 = (uint **)(*(long *)(param_4 + 8) + -0x18);
      if (param_3 != 0) {
        ppuVar10 = (uint **)(lVar1 + (ulong)(param_3 - 1) * 0x18);
      }
      puVar9 = *ppuVar10;
      puVar7 = ppuVar10[1];
      if (puVar9 != puVar7) {
        do {
          if (*(ushort *)(lVar8 + (ulong)*puVar9 * 8) == uVar2) goto LAB_008cc998;
          puVar9 = puVar9 + 1;
        } while (puVar9 != puVar7);
LAB_008cc9a8:
        uVar4 = (*(long *)(param_4 + 8) - lVar1 >> 3) * -0x5555555555555555;
        if (uVar4 < uVar11 || uVar4 - uVar11 == 0) {
          uVar11 = 0;
        }
        ppuVar10 = (uint **)(lVar1 + uVar11 * 0x18);
        puVar9 = *ppuVar10;
        puVar7 = ppuVar10[1];
        if (puVar9 == puVar7) {
LAB_008cca00:
          if (puVar9 != puVar7) {
            iVar3 = (int)puVar9;
            goto LAB_008cca0c;
          }
        }
        else {
          do {
            if (*(ushort *)(lVar8 + (ulong)*puVar9 * 8) == uVar2) goto LAB_008cca00;
            puVar9 = puVar9 + 1;
          } while (puVar9 != puVar7);
        }
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0
           )) {
                    /* try { // try from 008ccaa4 to 008ccaaf has its CatchHandler @ 008ccadc */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pcVar6 = "Error: Fill volume splits top plane when moving from top to bottom.\n";
        goto LAB_008cc988;
      }
LAB_008cc998:
      if (puVar9 == puVar7) goto LAB_008cc9a8;
      iVar3 = (int)puVar9;
LAB_008cca0c:
      std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::
      insert<std::__ndk1::__wrap_iter<unsigned_int_const*>>
                ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)param_1,
                 (__wrap_iter)*(long *)(param_1 + 8),iVar3 + 4,(__wrap_iter)puVar7);
    }
    uVar5 = 1;
  }
  return uVar5;
}


