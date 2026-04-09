// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GridLayer
// Entry Point: 0095ee2c
// Size: 444 bytes
// Signature: undefined __thiscall GridLayer(GridLayer * this, GridLayer * param_1)


/* MultiresTexture::GridLayer::GridLayer(MultiresTexture::GridLayer const&) */

void __thiscall MultiresTexture::GridLayer::GridLayer(GridLayer *this,GridLayer *param_1)

{
  int iVar1;
  int iVar2;
  GridLayer GVar3;
  uint uVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar9 = *(undefined8 *)param_1;
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar9;
  *(undefined8 *)(this + 0x18) = uVar8;
  *(undefined8 *)(this + 0x10) = uVar6;
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x4d) = *(undefined8 *)(param_1 + 0x4d);
  *(undefined8 *)(this + 0x38) = uVar10;
  *(undefined8 *)(this + 0x30) = uVar9;
  *(undefined8 *)(this + 0x48) = uVar8;
  *(undefined8 *)(this + 0x40) = uVar6;
  *(undefined8 *)(this + 0x28) = uVar12;
  *(undefined8 *)(this + 0x20) = uVar11;
  iVar1 = *(int *)(param_1 + 0x5c);
  GVar3 = param_1[0x60];
  uVar7 = (ulong)(uint)(iVar1 * *(int *)(param_1 + 0x58));
  *(int *)(this + 0x58) = *(int *)(param_1 + 0x58);
  *(int *)(this + 0x5c) = iVar1;
  this[0x60] = GVar3;
  pvVar5 = operator_new__(uVar7);
  *(void **)(this + 0x68) = pvVar5;
  memcpy(pvVar5,*(void **)(param_1 + 0x68),uVar7);
  *(undefined4 *)(this + 0x78) = 0;
  iVar1 = *(int *)(param_1 + 0x74);
  uVar4 = iVar1 * *(int *)(param_1 + 0x70);
  *(int *)(this + 0x70) = *(int *)(param_1 + 0x70);
  *(int *)(this + 0x74) = iVar1;
  uVar7 = (ulong)uVar4 << 2;
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
                    /* try { // try from 0095eeb0 to 0095eeb7 has its CatchHandler @ 0095f06c */
  pvVar5 = operator_new__(uVar7);
  if (uVar4 != 0) {
    memset(pvVar5,0,uVar7);
  }
  *(void **)(this + 0x80) = pvVar5;
  memcpy(pvVar5,*(void **)(param_1 + 0x80),uVar7);
  iVar1 = *(int *)(param_1 + 0x88);
  iVar2 = *(int *)(param_1 + 0x8c);
  uVar6 = *(undefined8 *)(param_1 + 0x90);
  *(int *)(this + 0x88) = iVar1;
  *(int *)(this + 0x8c) = iVar2;
  *(undefined8 *)(this + 0x90) = uVar6;
  uVar7 = (ulong)(uint)(iVar2 * iVar1) << 3;
                    /* try { // try from 0095eefc to 0095ef03 has its CatchHandler @ 0095f050 */
  pvVar5 = operator_new__(uVar7);
  *(void **)(this + 0x98) = pvVar5;
  memcpy(pvVar5,*(void **)(param_1 + 0x98),uVar7);
  iVar1 = *(int *)(param_1 + 0xa0);
  *(int *)(this + 0xa0) = iVar1;
  uVar6 = *(undefined8 *)(param_1 + 0xa4);
  *(undefined8 *)(this + 0xa4) = uVar6;
  uVar7 = (ulong)(uint)((int)uVar6 * iVar1) << 2;
                    /* try { // try from 0095ef30 to 0095ef37 has its CatchHandler @ 0095f034 */
  pvVar5 = operator_new__(uVar7);
  *(void **)(this + 0xb0) = pvVar5;
  memcpy(pvVar5,*(void **)(param_1 + 0xb0),uVar7);
  *(undefined4 *)(this + 0xc0) = 0;
  iVar1 = *(int *)(param_1 + 0xbc);
  uVar4 = iVar1 * *(int *)(param_1 + 0xb8);
  *(int *)(this + 0xb8) = *(int *)(param_1 + 0xb8);
  *(int *)(this + 0xbc) = iVar1;
  uVar7 = (ulong)uVar4 << 2;
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
                    /* try { // try from 0095ef68 to 0095ef6f has its CatchHandler @ 0095f01c */
  pvVar5 = operator_new__(uVar7);
  if (uVar4 != 0) {
    memset(pvVar5,0,uVar7);
  }
  *(void **)(this + 200) = pvVar5;
  memcpy(pvVar5,*(void **)(param_1 + 200),uVar7);
  iVar1 = *(int *)(param_1 + 0xd0);
  iVar2 = *(int *)(param_1 + 0xd4);
  uVar6 = *(undefined8 *)(param_1 + 0xd8);
  *(int *)(this + 0xd0) = iVar1;
  *(int *)(this + 0xd4) = iVar2;
  *(undefined8 *)(this + 0xd8) = uVar6;
  uVar7 = (ulong)(uint)(iVar2 * iVar1) << 3;
                    /* try { // try from 0095efb4 to 0095efbb has its CatchHandler @ 0095efe8 */
  pvVar5 = operator_new__(uVar7);
  *(void **)(this + 0xe0) = pvVar5;
  memcpy(pvVar5,*(void **)(param_1 + 0xe0),uVar7);
  this[0xe8] = param_1[0xe8];
  return;
}


