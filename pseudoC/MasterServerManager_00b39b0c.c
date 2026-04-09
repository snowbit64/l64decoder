// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MasterServerManager
// Entry Point: 00b39b0c
// Size: 736 bytes
// Signature: undefined __thiscall ~MasterServerManager(MasterServerManager * this)


/* WARNING: Type propagation algorithm not settling */
/* MasterServerManager::~MasterServerManager() */

void __thiscall MasterServerManager::~MasterServerManager(MasterServerManager *this)

{
  MasterServerManager MVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR__MasterServerManager_00fe9bc0;
  deleteServerOverviewInfos();
  if (((byte)this[0x4e8] & 1) == 0) {
    MVar1 = this[0x4c8];
  }
  else {
    operator_delete(*(void **)(this + 0x4f8));
    MVar1 = this[0x4c8];
  }
  if (((byte)MVar1 & 1) == 0) {
    MVar1 = this[0x488];
  }
  else {
    operator_delete(*(void **)(this + 0x4d8));
    MVar1 = this[0x488];
  }
  if (((byte)MVar1 & 1) == 0) {
    MVar1 = this[0x470];
  }
  else {
    operator_delete(*(void **)(this + 0x498));
    MVar1 = this[0x470];
  }
  if (((byte)MVar1 & 1) == 0) {
    MVar1 = this[0x450];
  }
  else {
    operator_delete(*(void **)(this + 0x480));
    MVar1 = this[0x450];
  }
  if (((byte)MVar1 & 1) == 0) {
    pvVar2 = *(void **)(this + 0x418);
  }
  else {
    operator_delete(*(void **)(this + 0x460));
    pvVar2 = *(void **)(this + 0x418);
  }
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x420) = pvVar2;
    operator_delete(pvVar2);
  }
  if (((byte)this[0x3b8] & 1) == 0) {
    MVar1 = this[0x3a0];
  }
  else {
    operator_delete(*(void **)(this + 0x3c8));
    MVar1 = this[0x3a0];
  }
  if (((byte)MVar1 & 1) == 0) {
    MVar1 = this[0x370];
  }
  else {
    operator_delete(*(void **)(this + 0x3b0));
    MVar1 = this[0x370];
  }
  if (((byte)MVar1 & 1) == 0) {
    MVar1 = this[0x358];
  }
  else {
    operator_delete(*(void **)(this + 0x380));
    MVar1 = this[0x358];
  }
  if (((byte)MVar1 & 1) == 0) {
    MVar1 = this[0x338];
  }
  else {
    operator_delete(*(void **)(this + 0x368));
    MVar1 = this[0x338];
  }
  if (((byte)MVar1 & 1) == 0) {
    MVar1 = this[0x310];
  }
  else {
    operator_delete(*(void **)(this + 0x348));
    MVar1 = this[0x310];
  }
  if (((byte)MVar1 & 1) == 0) {
    MVar1 = this[0x2f8];
  }
  else {
    operator_delete(*(void **)(this + 800));
    MVar1 = this[0x2f8];
  }
  if (((byte)MVar1 & 1) == 0) {
    MVar1 = this[0x2e0];
  }
  else {
    operator_delete(*(void **)(this + 0x308));
    MVar1 = this[0x2e0];
  }
  if (((byte)MVar1 & 1) == 0) {
    MVar1 = this[0x2c8];
  }
  else {
    operator_delete(*(void **)(this + 0x2f0));
    MVar1 = this[0x2c8];
  }
  if (((byte)MVar1 & 1) == 0) {
    MVar1 = this[0x2b0];
  }
  else {
    operator_delete(*(void **)(this + 0x2d8));
    MVar1 = this[0x2b0];
  }
  if (((byte)MVar1 & 1) == 0) {
    MVar1 = this[0x298];
  }
  else {
    operator_delete(*(void **)(this + 0x2c0));
    MVar1 = this[0x298];
  }
  if (((byte)MVar1 & 1) == 0) {
    MVar1 = this[0x280];
  }
  else {
    operator_delete(*(void **)(this + 0x2a8));
    MVar1 = this[0x280];
  }
  if (((byte)MVar1 & 1) == 0) {
    MVar1 = this[0x268];
  }
  else {
    operator_delete(*(void **)(this + 0x290));
    MVar1 = this[0x268];
  }
  if (((byte)MVar1 & 1) == 0) {
    MVar1 = this[0x250];
  }
  else {
    operator_delete(*(void **)(this + 0x278));
    MVar1 = this[0x250];
  }
  if (((byte)MVar1 & 1) == 0) {
    MVar1 = this[0x238];
  }
  else {
    operator_delete(*(void **)(this + 0x260));
    MVar1 = this[0x238];
  }
  if (((byte)MVar1 & 1) == 0) {
    MVar1 = this[0x220];
  }
  else {
    operator_delete(*(void **)(this + 0x248));
    MVar1 = this[0x220];
  }
  if (((byte)MVar1 & 1) == 0) {
    pvVar2 = *(void **)(this + 0x1f0);
  }
  else {
    operator_delete(*(void **)(this + 0x230));
    pvVar2 = *(void **)(this + 0x1f0);
  }
  if (pvVar2 == (void *)0x0) {
    MVar1 = this[0x110];
  }
  else {
    pvVar3 = pvVar2;
    pvVar4 = *(void **)(this + 0x1f8);
    if (*(void **)(this + 0x1f8) != pvVar2) {
      do {
        pvVar3 = *(void **)((long)pvVar4 + -0x20);
        pvVar5 = (void *)((long)pvVar4 + -0x28);
        if (pvVar3 != (void *)0x0) {
          *(void **)((long)pvVar4 + -0x18) = pvVar3;
          operator_delete(pvVar3);
        }
        pvVar4 = pvVar5;
      } while (pvVar5 != pvVar2);
      pvVar3 = *(void **)(this + 0x1f0);
    }
    *(void **)(this + 0x1f8) = pvVar2;
    operator_delete(pvVar3);
    MVar1 = this[0x110];
  }
  if (((byte)MVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x120));
  }
  ServerInfo::~ServerInfo((ServerInfo *)(this + 0x40));
  pvVar2 = *(void **)(this + 0x20);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar2;
    operator_delete(pvVar2);
    return;
  }
  return;
}


