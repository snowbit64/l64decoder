// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getServerUserInfo
// Entry Point: 00b3d3bc
// Size: 80 bytes
// Signature: undefined __thiscall getServerUserInfo(MasterServerManager * this, uint param_1, char * * param_2, char * * param_3, PLATFORM_ID * param_4)


/* MasterServerManager::getServerUserInfo(unsigned int, char const*&, char const*&,
   SysUtilBase::PLATFORM_ID&) */

bool __thiscall
MasterServerManager::getServerUserInfo
          (MasterServerManager *this,uint param_1,char **param_2,char **param_3,PLATFORM_ID *param_4
          )

{
  MasterServerManager *pMVar1;
  uint uVar2;
  PLATFORM_ID PVar3;
  
  uVar2 = *(uint *)(this + 0x440);
  if (uVar2 == param_1) {
    pMVar1 = this + 0x471;
    if (((byte)this[0x470] & 1) != 0) {
      pMVar1 = *(MasterServerManager **)(this + 0x480);
    }
    *param_2 = (char *)pMVar1;
    pMVar1 = this + 0x489;
    if (((byte)this[0x488] & 1) != 0) {
      pMVar1 = *(MasterServerManager **)(this + 0x498);
    }
    PVar3 = *(PLATFORM_ID *)(this + 0x468);
    *param_3 = (char *)pMVar1;
    *param_4 = PVar3;
  }
  return uVar2 == param_1;
}


