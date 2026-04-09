// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onNatRequestConnection
// Entry Point: 00b3fccc
// Size: 240 bytes
// Signature: undefined __thiscall onNatRequestConnection(MasterServerManager * this, GsBitStream * param_1, uint param_2, uint param_3)


/* MasterServerManager::onNatRequestConnection(GsBitStream*, unsigned int, unsigned int) */

void __thiscall
MasterServerManager::onNatRequestConnection
          (MasterServerManager *this,GsBitStream *param_1,uint param_2,uint param_3)

{
  if ((*(int *)(this + 400) == 0) &&
     ((this[0x38] != (MasterServerManager)0x0 || (*(int *)(this + 0x330) == 1)))) {
    GsBitStream::readBits(param_1,(uchar *)(this + 0x194),0x10,true);
    NetworkAddress::readFromStream((NetworkAddress *)(this + 0x198),param_1);
    *(uint *)(this + 400) = param_3;
    *(uint *)(this + 0x1cc) = param_3 + 0x1c98;
    NetworkAddress::readFromStream((NetworkAddress *)(this + 0x1a0),param_1);
    NetworkAddress::readFromStream((NetworkAddress *)(this + 0x1a8),param_1);
    NetworkAddress::readFromStream((NetworkAddress *)(this + 0x1b0),param_1);
    NetworkAddress::readFromStream((NetworkAddress *)(this + 0x1b8),param_1);
    if (*(int *)(this + 0x330) == 1) {
      MasterServerUtil::readString(param_1,(basic_string *)(this + 0x3b8));
      MasterServerUtil::readString(param_1,(basic_string *)(this + 0x3a0));
      *(undefined4 *)(this + 0x39c) = 0;
      GsBitStream::readBits(param_1,(uchar *)(this + 0x39c),4,true);
    }
    *(undefined4 *)(this + 0x1c8) = 0;
    *(undefined4 *)(this + 0x1c4) = 0;
    *(undefined4 *)(this + 0x1d0) = 0;
  }
  return;
}


