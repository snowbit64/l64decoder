// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DeviceMapping
// Entry Point: 00b1aaec
// Size: 1000 bytes
// Signature: undefined __thiscall ~DeviceMapping(DeviceMapping * this)


/* WARNING: Type propagation algorithm not settling */
/* DeviceMappingManager::DeviceMapping::~DeviceMapping() */

void __thiscall DeviceMappingManager::DeviceMapping::~DeviceMapping(DeviceMapping *this)

{
  DeviceMapping DVar1;
  long lVar2;
  
  if (((byte)this[0xb98] & 1) == 0) {
    DVar1 = this[0xb80];
  }
  else {
    operator_delete(*(void **)(this + 0xba8));
    DVar1 = this[0xb80];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0xb68];
  }
  else {
    operator_delete(*(void **)(this + 0xb90));
    DVar1 = this[0xb68];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0xb50];
  }
  else {
    operator_delete(*(void **)(this + 0xb78));
    DVar1 = this[0xb50];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0xb38];
  }
  else {
    operator_delete(*(void **)(this + 0xb60));
    DVar1 = this[0xb38];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0xb20];
  }
  else {
    operator_delete(*(void **)(this + 0xb48));
    DVar1 = this[0xb20];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0xb08];
  }
  else {
    operator_delete(*(void **)(this + 0xb30));
    DVar1 = this[0xb08];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0xaf0];
  }
  else {
    operator_delete(*(void **)(this + 0xb18));
    DVar1 = this[0xaf0];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0xad8];
  }
  else {
    operator_delete(*(void **)(this + 0xb00));
    DVar1 = this[0xad8];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0xac0];
  }
  else {
    operator_delete(*(void **)(this + 0xae8));
    DVar1 = this[0xac0];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0xaa8];
  }
  else {
    operator_delete(*(void **)(this + 0xad0));
    DVar1 = this[0xaa8];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0xa90];
  }
  else {
    operator_delete(*(void **)(this + 0xab8));
    DVar1 = this[0xa90];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0xa78];
  }
  else {
    operator_delete(*(void **)(this + 0xaa0));
    DVar1 = this[0xa78];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0xa60];
  }
  else {
    operator_delete(*(void **)(this + 0xa88));
    DVar1 = this[0xa60];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0xa48];
  }
  else {
    operator_delete(*(void **)(this + 0xa70));
    DVar1 = this[0xa48];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0xa30];
  }
  else {
    operator_delete(*(void **)(this + 0xa58));
    DVar1 = this[0xa30];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0xa18];
  }
  else {
    operator_delete(*(void **)(this + 0xa40));
    DVar1 = this[0xa18];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0xa00];
  }
  else {
    operator_delete(*(void **)(this + 0xa28));
    DVar1 = this[0xa00];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0x9e8];
  }
  else {
    operator_delete(*(void **)(this + 0xa10));
    DVar1 = this[0x9e8];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0x9d0];
  }
  else {
    operator_delete(*(void **)(this + 0x9f8));
    DVar1 = this[0x9d0];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0x9b8];
  }
  else {
    operator_delete(*(void **)(this + 0x9e0));
    DVar1 = this[0x9b8];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0x9a0];
  }
  else {
    operator_delete(*(void **)(this + 0x9c8));
    DVar1 = this[0x9a0];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0x988];
  }
  else {
    operator_delete(*(void **)(this + 0x9b0));
    DVar1 = this[0x988];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0x970];
  }
  else {
    operator_delete(*(void **)(this + 0x998));
    DVar1 = this[0x970];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0x958];
  }
  else {
    operator_delete(*(void **)(this + 0x980));
    DVar1 = this[0x958];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0x940];
  }
  else {
    operator_delete(*(void **)(this + 0x968));
    DVar1 = this[0x940];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0x928];
  }
  else {
    operator_delete(*(void **)(this + 0x950));
    DVar1 = this[0x928];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0x910];
  }
  else {
    operator_delete(*(void **)(this + 0x938));
    DVar1 = this[0x910];
  }
  if (((byte)DVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x920));
  }
  lVar2 = 0;
  do {
    if (((byte)this[lVar2 + 0x8f8] & 1) != 0) {
      operator_delete(*(void **)(this + lVar2 + 0x908));
    }
    lVar2 = lVar2 + -0x18;
  } while (lVar2 != -0x300);
  lVar2 = 0;
  do {
    if (((byte)this[lVar2 + 0x5f8] & 1) != 0) {
      operator_delete(*(void **)(this + lVar2 + 0x608));
    }
    lVar2 = lVar2 + -0x18;
  } while (lVar2 != -0x300);
  if (((byte)this[0x250] & 1) == 0) {
    DVar1 = this[0x208];
  }
  else {
    operator_delete(*(void **)(this + 0x260));
    DVar1 = this[0x208];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0x1c0];
  }
  else {
    operator_delete(*(void **)(this + 0x218));
    DVar1 = this[0x1c0];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0x178];
  }
  else {
    operator_delete(*(void **)(this + 0x1d0));
    DVar1 = this[0x178];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0x130];
  }
  else {
    operator_delete(*(void **)(this + 0x188));
    DVar1 = this[0x130];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0xe8];
  }
  else {
    operator_delete(*(void **)(this + 0x140));
    DVar1 = this[0xe8];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0xa0];
  }
  else {
    operator_delete(*(void **)(this + 0xf8));
    DVar1 = this[0xa0];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0x58];
  }
  else {
    operator_delete(*(void **)(this + 0xb0));
    DVar1 = this[0x58];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0x10];
  }
  else {
    operator_delete(*(void **)(this + 0x68));
    DVar1 = this[0x10];
  }
  if (((byte)DVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x20));
  return;
}


