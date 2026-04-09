// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ServerInfo
// Entry Point: 00b399d4
// Size: 312 bytes
// Signature: undefined __thiscall ~ServerInfo(ServerInfo * this)


/* MasterServerManager::ServerInfo::~ServerInfo() */

void __thiscall MasterServerManager::ServerInfo::~ServerInfo(ServerInfo *this)

{
  ServerInfo SVar1;
  void **ppvVar2;
  void *pvVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  ppvVar2 = (void **)*(void **)(this + 0xb8);
  while (ppvVar2 != (void **)0x0) {
    pvVar3 = *ppvVar2;
    if ((*(byte *)(ppvVar2 + 2) & 1) != 0) {
      operator_delete(ppvVar2[4]);
    }
    operator_delete(ppvVar2);
    ppvVar2 = (void **)pvVar3;
  }
  pvVar3 = *(void **)(this + 0xa8);
  *(undefined8 *)(this + 0xa8) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  if (((byte)this[0x90] & 1) == 0) {
    SVar1 = this[0x70];
  }
  else {
    operator_delete(*(void **)(this + 0xa0));
    SVar1 = this[0x70];
  }
  if (((byte)SVar1 & 1) == 0) {
    SVar1 = this[0x58];
  }
  else {
    operator_delete(*(void **)(this + 0x80));
    SVar1 = this[0x58];
  }
  if (((byte)SVar1 & 1) == 0) {
    pbVar5 = *(byte **)(this + 0x40);
  }
  else {
    operator_delete(*(void **)(this + 0x68));
    pbVar5 = *(byte **)(this + 0x40);
  }
  if (pbVar5 == (byte *)0x0) {
    SVar1 = this[0x18];
  }
  else {
    pbVar4 = *(byte **)(this + 0x48);
    pbVar6 = pbVar5;
    if (pbVar4 != pbVar5) {
      do {
        pbVar6 = pbVar4 + -0x28;
        if ((*pbVar6 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -0x18));
        }
        pbVar4 = pbVar6;
      } while (pbVar6 != pbVar5);
      pbVar6 = *(byte **)(this + 0x40);
    }
    *(byte **)(this + 0x48) = pbVar5;
    operator_delete(pbVar6);
    SVar1 = this[0x18];
  }
  if (((byte)SVar1 & 1) == 0) {
    SVar1 = *this;
  }
  else {
    operator_delete(*(void **)(this + 0x28));
    SVar1 = *this;
  }
  if (((byte)SVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


