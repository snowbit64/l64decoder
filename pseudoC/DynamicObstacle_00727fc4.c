// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DynamicObstacle
// Entry Point: 00727fc4
// Size: 256 bytes
// Signature: undefined __thiscall DynamicObstacle(DynamicObstacle * this, uint param_1, Vector2 * param_2, uint param_3, Tag param_4)


/* DynamicObstacle::DynamicObstacle(unsigned int, Vector2 const&, unsigned int, Obstacle::Tag) */

void __thiscall
DynamicObstacle::DynamicObstacle
          (DynamicObstacle *this,uint param_1,Vector2 *param_2,uint param_3,Tag param_4)

{
  size_t __n;
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *__s;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)param_2;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if (param_1 == 0) {
    *(uint *)(this + 0x18) = param_3;
    *(Tag *)(this + 0x1c) = param_4;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x20) = 0;
  }
  else {
    uVar3 = (ulong)param_1;
    puVar2 = (undefined8 *)operator_new(uVar3 * 0x1c);
    puVar1 = (undefined8 *)((long)puVar2 + uVar3 * 0x1c);
    *(undefined8 **)this = puVar2;
    *(undefined8 **)(this + 8) = puVar2;
    *(undefined8 **)(this + 0x10) = puVar1;
    do {
      puVar2[1] = 0x3f80000000000000;
      *puVar2 = 0;
      puVar2[2] = uVar4;
      *(undefined4 *)(puVar2 + 3) = 0;
      puVar2 = (undefined8 *)((long)puVar2 + 0x1c);
    } while (puVar2 != puVar1);
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 **)(this + 8) = puVar1;
    *(uint *)(this + 0x18) = param_3;
    *(Tag *)(this + 0x1c) = param_4;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
                    /* try { // try from 00728050 to 00728057 has its CatchHandler @ 007280c4 */
    __s = operator_new(uVar3 * 0x28);
    *(void **)(this + 0x20) = __s;
    __n = ((uVar3 * 0x28 - 0x28) / 0x28) * 0x28 + 0x28;
    *(void **)(this + 0x30) = (void *)((long)__s + uVar3 * 0x28);
    memset(__s,0,__n);
    *(size_t *)(this + 0x28) = (long)__s + __n;
  }
  this[0x38] = (DynamicObstacle)0x0;
  return;
}


