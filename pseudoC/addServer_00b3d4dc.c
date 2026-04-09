// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addServer
// Entry Point: 00b3d4dc
// Size: 400 bytes
// Signature: undefined __thiscall addServer(MasterServerManager * this, char * param_1, char * param_2, uint param_3, uint param_4, char * param_5, char * param_6, bool param_7, bool param_8, bool param_9)


/* MasterServerManager::addServer(char const*, char const*, unsigned int, unsigned int, char const*,
   char const*, bool, bool, bool) */

void __thiscall
MasterServerManager::addServer
          (MasterServerManager *this,char *param_1,char *param_2,uint param_3,uint param_4,
          char *param_5,char *param_6,bool param_7,bool param_8,bool param_9)

{
  void **ppvVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  
  if (this[0x38] == (MasterServerManager)0x0) {
    this[0x38] = (MasterServerManager)0x1;
    *(undefined4 *)(this + 0xcc) = 0xffffffff;
    if (((byte)this[0xd0] & 1) == 0) {
      *(undefined2 *)(this + 0xd0) = 0;
      lVar2 = *(long *)(this + 0x100);
    }
    else {
      **(undefined **)(this + 0xe0) = 0;
      *(undefined8 *)(this + 0xd8) = 0;
      lVar2 = *(long *)(this + 0x100);
    }
    if (lVar2 != 0) {
      ppvVar1 = (void **)*(void **)(this + 0xf8);
      while (ppvVar1 != (void **)0x0) {
        pvVar4 = *ppvVar1;
        if ((*(byte *)(ppvVar1 + 2) & 1) != 0) {
          operator_delete(ppvVar1[4]);
        }
        operator_delete(ppvVar1);
        ppvVar1 = (void **)pvVar4;
      }
      lVar2 = *(long *)(this + 0xf0);
      *(undefined8 *)(this + 0xf8) = 0;
      if (lVar2 != 0) {
        lVar3 = 0;
        do {
          *(undefined8 *)(*(long *)(this + 0xe8) + lVar3 * 8) = 0;
          lVar3 = lVar3 + 1;
        } while (lVar2 != lVar3);
      }
      *(undefined8 *)(this + 0x100) = 0;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(this + 0x40));
    this[0x70] = (MasterServerManager)param_7;
    uVar5 = NEON_umin(CONCAT44(param_4,param_3),0x2000000020,4);
    *(undefined8 *)(this + 0x74) = uVar5;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(this + 0x98));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(this + 0xb0));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(this + 0x58));
    this[200] = (MasterServerManager)param_8;
    this[0xc9] = (MasterServerManager)param_9;
    initiateSendAddServer();
    return;
  }
  return;
}


