// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079a320
// Entry Point: 0079a320
// Size: 376 bytes
// Signature: undefined FUN_0079a320(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0079a320(undefined4 *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long **pplVar6;
  long **pplVar7;
  long *plVar8;
  long **pplVar9;
  
  bVar2 = (bool)GenericMpManager::getInstance();
  GenericMpManager::cleanUpGameSessions(bVar2);
  uVar1 = *param_1;
  uVar3 = ENetNetworkManager::getInstance();
  ENetNetworkManager::shutdown(uVar3,(uchar)uVar1);
  if (((DAT_01053c80 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_01053c80), iVar4 != 0)) {
    DAT_01053c58 = 0;
    DAT_01053c50 = (__tree_node *)0x0;
    DAT_01053c40 = &PTR__ScriptingNetworkManager_00fdb4c0;
    _DAT_01053c68 = 0;
    DAT_01053c60 = 0;
    DAT_01053c78 = 0;
    _DAT_01053c70 = 0;
    DAT_01053c48 = (long **)&DAT_01053c50;
                    /* try { // try from 0079a468 to 0079a46b has its CatchHandler @ 0079a498 */
    lVar5 = ENetNetworkManager::getInstance();
    *(undefined ****)(lVar5 + 0x1c8) = &DAT_01053c40;
    __cxa_atexit(ScriptingNetworkManager::~ScriptingNetworkManager,&DAT_01053c40,&PTR_LOOP_00fd8de0)
    ;
    __cxa_guard_release(&DAT_01053c80);
  }
  pplVar9 = DAT_01053c48;
  if (DAT_01053c48 != (long **)&DAT_01053c50) {
    do {
      NetworkStream::setReadStream((NetworkStream *)pplVar9[5],(GsBitStream *)0x0);
      if (pplVar9[5] != (long *)0x0) {
        (**(code **)(*pplVar9[5] + 8))();
      }
      pplVar6 = (long **)pplVar9[1];
      if ((long **)pplVar9[1] == (long **)0x0) {
        pplVar6 = pplVar9 + 2;
        pplVar7 = (long **)*pplVar6;
        if ((long **)*pplVar7 != pplVar9) {
          do {
            plVar8 = *pplVar6;
            pplVar6 = (long **)(plVar8 + 2);
            pplVar7 = (long **)*pplVar6;
          } while (*pplVar7 != plVar8);
        }
      }
      else {
        do {
          pplVar7 = pplVar6;
          pplVar6 = (long **)*pplVar7;
        } while ((long **)*pplVar7 != (long **)0x0);
      }
      pplVar9 = pplVar7;
    } while (pplVar7 != (long **)&DAT_01053c50);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,NetworkStream*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,NetworkStream*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,NetworkStream*>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,NetworkStream*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,NetworkStream*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,NetworkStream*>>>
             *)&DAT_01053c48,DAT_01053c50);
  DAT_01053c48 = (long **)&DAT_01053c50;
  DAT_01053c58 = 0;
  DAT_01053c50 = (__tree_node *)0x0;
  return;
}


