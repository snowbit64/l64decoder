// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00b4cd80
// Size: 228 bytes
// Signature: undefined __cdecl init(char * param_1)


/* GenericSaveGameUtil::init(char const*) */

void GenericSaveGameUtil::init(char *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  
  lVar3 = DAT_0211c588;
  if (DAT_0211c588 != s_saveGames) {
    uVar5 = 0;
    lVar2 = DAT_0211c588;
    lVar3 = s_saveGames;
    do {
      pvVar4 = *(void **)(lVar3 + uVar5 * 8);
      if (pvVar4 != (void *)0x0) {
        if (*(void **)((long)pvVar4 + 8) != (void *)0x0) {
          operator_delete__(*(void **)((long)pvVar4 + 8));
        }
        if (*(void **)((long)pvVar4 + 0x10) != (void *)0x0) {
          operator_delete__(*(void **)((long)pvVar4 + 0x10));
        }
        operator_delete(pvVar4);
        lVar2 = DAT_0211c588;
        lVar3 = s_saveGames;
      }
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (uVar5 < (ulong)(lVar2 - lVar3 >> 3));
  }
  DAT_0211c588 = lVar3;
  PathUtil::getUserProfileAppPath(param_1,(basic_string *)&s_saveGameDirectoryBase,true,true);
  s_state = 0;
  CloudDeviceManager::getInstance();
  plVar1 = (long *)CloudDeviceManager::getCloudDevice();
  if (plVar1 != (long *)0x0) {
    s_pCloudSession = (**(code **)(*plVar1 + 0x28))(plVar1,CLOUD_SAVEGAME_VIEW,&s_cloudCallbacks);
  }
  return;
}


