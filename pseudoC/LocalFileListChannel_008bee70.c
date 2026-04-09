// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LocalFileListChannel
// Entry Point: 008bee70
// Size: 212 bytes
// Signature: undefined __thiscall ~LocalFileListChannel(LocalFileListChannel * this)


/* LocalFileListChannel::~LocalFileListChannel() */

void __thiscall LocalFileListChannel::~LocalFileListChannel(LocalFileListChannel *this)

{
  LocalFileListChannel LVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  *(undefined ***)this = &PTR__LocalFileListChannel_00fddce0;
  if (*(long **)(this + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x28) + 8))();
  }
  if (((byte)this[0x50] & 1) == 0) {
    LVar1 = this[0x38];
  }
  else {
    operator_delete(*(void **)(this + 0x60));
    LVar1 = this[0x38];
  }
  if (((byte)LVar1 & 1) == 0) {
    pbVar3 = *(byte **)(this + 8);
  }
  else {
    operator_delete(*(void **)(this + 0x48));
    pbVar3 = *(byte **)(this + 8);
  }
  if (pbVar3 == (byte *)0x0) {
    return;
  }
  pbVar2 = *(byte **)(this + 0x10);
  pbVar4 = pbVar3;
  if (pbVar2 != pbVar3) {
    do {
      pbVar4 = pbVar2 + -0x18;
      if ((*pbVar4 & 1) != 0) {
        operator_delete(*(void **)(pbVar2 + -8));
      }
      pbVar2 = pbVar4;
    } while (pbVar4 != pbVar3);
    pbVar4 = *(byte **)(this + 8);
  }
  *(byte **)(this + 0x10) = pbVar3;
  operator_delete(pbVar4);
  return;
}


