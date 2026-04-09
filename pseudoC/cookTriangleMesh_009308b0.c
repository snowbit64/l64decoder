// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cookTriangleMesh
// Entry Point: 009308b0
// Size: 252 bytes
// Signature: undefined __thiscall cookTriangleMesh(PhysicsCookingInterface * this, IndexedTriangleSet * param_1, bool param_2, Vector3 * param_3, uchar * * param_4, uint * param_5)


/* I3DSaveUtil::PhysicsCookingInterface::cookTriangleMesh(IndexedTriangleSet*, bool, Vector3 const&,
   unsigned char*&, unsigned int&) */

uint __thiscall
I3DSaveUtil::PhysicsCookingInterface::cookTriangleMesh
          (PhysicsCookingInterface *this,IndexedTriangleSet *param_1,bool param_2,Vector3 *param_3,
          uchar **param_4,uint *param_5)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  uint uVar4;
  Bt2PhysicsContextManager *this_00;
  uchar *__s;
  ulong __n;
  uint local_78 [2];
  void *local_70;
  void *local_68;
  char local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_78[0] = 0;
  local_70 = (void *)0x0;
  local_68 = (void *)0x0;
  local_60 = '\x01';
                    /* try { // try from 009308fc to 00930913 has its CatchHandler @ 009309b0 */
  this_00 = (Bt2PhysicsContextManager *)Bt2PhysicsContextManager::getInstance();
  uVar4 = Bt2PhysicsContextManager::cookTriangleMesh
                    (this_00,param_1,param_2,param_3,(Bt2PhysicsUserMemoryStream *)local_78);
  if ((uVar4 & 1) != 0) {
    __n = (ulong)local_78[0];
    uVar1 = local_78[0] + 3 & 0xfffffffc;
                    /* try { // try from 00930928 to 0093092f has its CatchHandler @ 009309ac */
    __s = (uchar *)operator_new__((ulong)uVar1);
    *param_4 = __s;
    memset(__s,0,(ulong)uVar1);
    pvVar3 = local_68;
    *param_5 = uVar1;
    memcpy(__s,local_68,__n);
    local_68 = (void *)((long)pvVar3 + __n);
  }
  if ((local_60 != '\0') && (local_70 != (void *)0x0)) {
    operator_delete__(local_70);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


