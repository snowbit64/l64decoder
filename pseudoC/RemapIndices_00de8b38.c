// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RemapIndices
// Entry Point: 00de8b38
// Size: 636 bytes
// Signature: undefined __thiscall RemapIndices(ColourSet * this, uchar * param_1, uchar * param_2)


/* squish::ColourSet::RemapIndices(unsigned char const*, unsigned char*) const */

void __thiscall squish::ColourSet::RemapIndices(ColourSet *this,uchar *param_1,uchar *param_2)

{
  int iVar1;
  
  if (*(int *)(this + 0x104) == -1) {
    *param_2 = '\x03';
    iVar1 = *(int *)(this + 0x108);
  }
  else {
    *param_2 = param_1[*(int *)(this + 0x104)];
    iVar1 = *(int *)(this + 0x108);
  }
  if (iVar1 == -1) {
    param_2[1] = '\x03';
    iVar1 = *(int *)(this + 0x10c);
  }
  else {
    param_2[1] = param_1[iVar1];
    iVar1 = *(int *)(this + 0x10c);
  }
  if (iVar1 == -1) {
    param_2[2] = '\x03';
    iVar1 = *(int *)(this + 0x110);
  }
  else {
    param_2[2] = param_1[iVar1];
    iVar1 = *(int *)(this + 0x110);
  }
  if (iVar1 == -1) {
    param_2[3] = '\x03';
    iVar1 = *(int *)(this + 0x114);
  }
  else {
    param_2[3] = param_1[iVar1];
    iVar1 = *(int *)(this + 0x114);
  }
  if (iVar1 == -1) {
    param_2[4] = '\x03';
    iVar1 = *(int *)(this + 0x118);
  }
  else {
    param_2[4] = param_1[iVar1];
    iVar1 = *(int *)(this + 0x118);
  }
  if (iVar1 == -1) {
    param_2[5] = '\x03';
    iVar1 = *(int *)(this + 0x11c);
  }
  else {
    param_2[5] = param_1[iVar1];
    iVar1 = *(int *)(this + 0x11c);
  }
  if (iVar1 == -1) {
    param_2[6] = '\x03';
    iVar1 = *(int *)(this + 0x120);
  }
  else {
    param_2[6] = param_1[iVar1];
    iVar1 = *(int *)(this + 0x120);
  }
  if (iVar1 == -1) {
    param_2[7] = '\x03';
    iVar1 = *(int *)(this + 0x124);
  }
  else {
    param_2[7] = param_1[iVar1];
    iVar1 = *(int *)(this + 0x124);
  }
  if (iVar1 == -1) {
    param_2[8] = '\x03';
    iVar1 = *(int *)(this + 0x128);
  }
  else {
    param_2[8] = param_1[iVar1];
    iVar1 = *(int *)(this + 0x128);
  }
  if (iVar1 == -1) {
    param_2[9] = '\x03';
    iVar1 = *(int *)(this + 300);
  }
  else {
    param_2[9] = param_1[iVar1];
    iVar1 = *(int *)(this + 300);
  }
  if (iVar1 == -1) {
    param_2[10] = '\x03';
    iVar1 = *(int *)(this + 0x130);
  }
  else {
    param_2[10] = param_1[iVar1];
    iVar1 = *(int *)(this + 0x130);
  }
  if (iVar1 == -1) {
    param_2[0xb] = '\x03';
    iVar1 = *(int *)(this + 0x134);
  }
  else {
    param_2[0xb] = param_1[iVar1];
    iVar1 = *(int *)(this + 0x134);
  }
  if (iVar1 == -1) {
    param_2[0xc] = '\x03';
    iVar1 = *(int *)(this + 0x138);
  }
  else {
    param_2[0xc] = param_1[iVar1];
    iVar1 = *(int *)(this + 0x138);
  }
  if (iVar1 == -1) {
    param_2[0xd] = '\x03';
    iVar1 = *(int *)(this + 0x13c);
  }
  else {
    param_2[0xd] = param_1[iVar1];
    iVar1 = *(int *)(this + 0x13c);
  }
  if (iVar1 == -1) {
    param_2[0xe] = '\x03';
    iVar1 = *(int *)(this + 0x140);
  }
  else {
    param_2[0xe] = param_1[iVar1];
    iVar1 = *(int *)(this + 0x140);
  }
  if (iVar1 == -1) {
    param_2[0xf] = '\x03';
    return;
  }
  param_2[0xf] = param_1[iVar1];
  return;
}


