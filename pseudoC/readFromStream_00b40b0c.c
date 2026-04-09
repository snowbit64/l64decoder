// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readFromStream
// Entry Point: 00b40b0c
// Size: 524 bytes
// Signature: undefined __thiscall readFromStream(ServerOverviewInfo * this, GsBitStream * param_1, uint param_2)


/* MasterServerManager::ServerOverviewInfo::readFromStream(GsBitStream*, unsigned int) */

undefined8 __thiscall
MasterServerManager::ServerOverviewInfo::readFromStream
          (ServerOverviewInfo *this,GsBitStream *param_1,uint param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  
  *(undefined4 *)this = 0;
  *(undefined8 *)(this + 0x20) = 0;
  puVar4 = (undefined4 *)(this + 0x40);
  *puVar4 = 0;
  puVar3 = (undefined2 *)(this + 0x44);
  *puVar3 = 0;
  *(undefined4 *)(this + 0x48) = 0;
  uVar1 = GsBitStream::readBits(param_1,(uchar *)this,0x20,true);
  uVar2 = 0;
  if ((uVar1 & 1) != 0) {
    uVar1 = MasterServerUtil::readString(param_1,(basic_string *)(this + 8));
    if ((((((uVar1 & 1) == 0) ||
          (uVar1 = MasterServerUtil::readString(param_1,(basic_string *)(this + 0x28)),
          (uVar1 & 1) == 0)) ||
         (uVar1 = MasterServerUtil::readString(param_1,(basic_string *)(this + 0x50)),
         (uVar1 & 1) == 0)) ||
        ((uVar1 = MasterServerUtil::readString(param_1,(basic_string *)(this + 0x68)),
         (uVar1 & 1) == 0 ||
         (uVar1 = GsBitStream::readBits(param_1,(uchar *)(this + 0x48),5,true), (uVar1 & 1) == 0))))
       || ((uVar1 = GsBitStream::readBits(param_1,(uchar *)(this + 0x20),5,true), (uVar1 & 1) == 0
           || ((uVar1 = GsBitStream::readBits(param_1,(uchar *)(this + 0x24),5,true),
               (uVar1 & 1) == 0 ||
               (uVar1 = GsBitStream::readBits(param_1,(uchar *)(this + 0x26),5,true),
               (uVar1 & 1) == 0)))))) {
      uVar2 = 0;
    }
    else {
      *(undefined *)puVar4 = 0;
      uVar1 = GsBitStream::readBits(param_1,(uchar *)puVar4,1,true);
      uVar2 = 0;
      if ((uVar1 & 1) != 0) {
        this[0x41] = (ServerOverviewInfo)0x0;
        uVar1 = GsBitStream::readBits(param_1,(uchar *)(this + 0x41),1,true);
        uVar2 = 0;
        if ((uVar1 & 1) != 0) {
          this[0x43] = (ServerOverviewInfo)0x0;
          uVar1 = GsBitStream::readBits(param_1,(uchar *)(this + 0x43),1,true);
          uVar2 = 0;
          if ((uVar1 & 1) != 0) {
            *(undefined *)puVar3 = 0;
            uVar1 = GsBitStream::readBits(param_1,(uchar *)puVar3,1,true);
            uVar2 = 0;
            if ((uVar1 & 1) != 0) {
              this[0x45] = (ServerOverviewInfo)0x0;
              uVar1 = GsBitStream::readBits(param_1,(uchar *)(this + 0x45),1,true);
              uVar2 = 0;
              if ((uVar1 & 1) != 0) {
                this[0x42] = (ServerOverviewInfo)0x0;
                uVar1 = GsBitStream::readBits(param_1,(uchar *)(this + 0x42),1,true);
                uVar2 = 0;
                if ((uVar1 & 1) != 0) {
                  uVar2 = 1;
                  *(uint *)(this + 4) = param_2;
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}


