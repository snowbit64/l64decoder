// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BaseTerrainSyncer
// Entry Point: 008eddc4
// Size: 148 bytes
// Signature: undefined __thiscall BaseTerrainSyncer(BaseTerrainSyncer * this, BaseTerrain * param_1)


/* BaseTerrainSyncer::BaseTerrainSyncer(BaseTerrain*) */

void __thiscall BaseTerrainSyncer::BaseTerrainSyncer(BaseTerrainSyncer *this,BaseTerrain *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  void **ppvVar3;
  void *__s;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(BaseTerrain **)(this + 0x28) = param_1;
                    /* try { // try from 008edde8 to 008ede0b has its CatchHandler @ 008ede68 */
  uVar1 = BaseTerrain::getHeightMapSize();
  *(undefined4 *)(this + 0x30) = uVar1;
  uVar2 = BaseTerrain::getHeightMapSize();
  *(uint *)(this + 0x34) = uVar2;
  ppvVar3 = (void **)operator_new(0x10);
  *(undefined4 *)(ppvVar3 + 1) = *(undefined4 *)(this + 0x30);
  *(uint *)((long)ppvVar3 + 0xc) = uVar2;
                    /* try { // try from 008ede20 to 008ede27 has its CatchHandler @ 008ede58 */
  __s = operator_new__((ulong)uVar2 << 3);
  *ppvVar3 = __s;
  if (uVar2 != 0) {
    memset(__s,0xff,(ulong)uVar2 << 3);
  }
  *(void ***)(this + 0x18) = ppvVar3;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  this[0x40] = (BaseTerrainSyncer)0x0;
  return;
}


