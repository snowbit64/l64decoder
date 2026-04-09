// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DynamicAvoidance
// Entry Point: 00723eb0
// Size: 280 bytes
// Signature: undefined __thiscall DynamicAvoidance(DynamicAvoidance * this)


/* DynamicAvoidance::DynamicAvoidance() */

void __thiscall DynamicAvoidance::DynamicAvoidance(DynamicAvoidance *this)

{
  long lVar1;
  undefined8 *puVar2;
  Thread *this_00;
  undefined4 local_68 [2];
  void *local_60;
  void *local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_68[0] = 0x42200000;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_60 = (void *)0x0;
                    /* try { // try from 00723ee8 to 00723ef3 has its CatchHandler @ 00724008 */
  HashTable<unsigned_int,DynamicAvoidance::ObstacleHash>::HashTable
            ((HashTable<unsigned_int,DynamicAvoidance::ObstacleHash> *)this,0x100,
             (ObstacleHash *)local_68);
  if (local_60 != (void *)0x0) {
    local_58 = local_60;
    operator_delete(local_60);
  }
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
                    /* try { // try from 00723f14 to 00723f1b has its CatchHandler @ 00724000 */
  puVar2 = (undefined8 *)operator_new(8);
  *(undefined8 **)(this + 0x60) = puVar2;
  *puVar2 = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 1;
  *(undefined8 *)(this + 0x68) = 1;
                    /* try { // try from 00723f34 to 00723f3b has its CatchHandler @ 00724028 */
  this_00 = (Thread *)operator_new(0x48);
                    /* try { // try from 00723f40 to 00723f43 has its CatchHandler @ 00723fec */
  Thread::Thread(this_00);
  *(Thread **)(this + 0x80) = this_00;
  this[0x88] = (DynamicAvoidance)0x0;
                    /* try { // try from 00723f50 to 00723f5f has its CatchHandler @ 00724028 */
  Event::Event((Event *)(this + 0x8c),false,false);
                    /* try { // try from 00723f64 to 00723f73 has its CatchHandler @ 00723fdc */
  Event::Event((Event *)(this + 0xe8),false,false);
                    /* try { // try from 00723f78 to 00723f9b has its CatchHandler @ 00723fc8 */
  Thread::start(*(Thread **)(this + 0x80),doWorkFunc,this,0xffffffff,"DynamicAvoidance",2,0x80000);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


