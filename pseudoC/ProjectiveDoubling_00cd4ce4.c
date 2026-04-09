// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProjectiveDoubling
// Entry Point: 00cd4ce4
// Size: 380 bytes
// Signature: undefined __thiscall ProjectiveDoubling(ProjectiveDoubling * this, ModularArithmetic * param_1, Integer * param_2, Integer * param_3, ECPPoint * param_4)


/* CryptoPP::ProjectiveDoubling::ProjectiveDoubling(CryptoPP::ModularArithmetic const&,
   CryptoPP::Integer const&, CryptoPP::Integer const&, CryptoPP::ECPPoint const&) */

void __thiscall
CryptoPP::ProjectiveDoubling::ProjectiveDoubling
          (ProjectiveDoubling *this,ModularArithmetic *param_1,Integer *param_2,Integer *param_3,
          ECPPoint *param_4)

{
  Integer *this_00;
  Integer *this_01;
  Integer *this_02;
  Integer *pIVar1;
  Integer *pIVar2;
  Integer *pIVar3;
  
  pIVar2 = (Integer *)(this + 8);
  pIVar3 = (Integer *)(this + 0x38);
  *(ModularArithmetic **)this = param_1;
  Integer::Integer(pIVar2);
                    /* try { // try from 00cd4d24 to 00cd4d2b has its CatchHandler @ 00cd4ea0 */
  Integer::Integer(pIVar3);
  this_00 = (Integer *)(this + 0x68);
                    /* try { // try from 00cd4d30 to 00cd4d37 has its CatchHandler @ 00cd4e90 */
  Integer::Integer(this_00);
  this_01 = (Integer *)(this + 0xa0);
  *(undefined2 *)(this + 0x98) = 1;
                    /* try { // try from 00cd4d44 to 00cd4d4b has its CatchHandler @ 00cd4e88 */
  Integer::Integer(this_01);
  this_02 = (Integer *)(this + 0xd0);
                    /* try { // try from 00cd4d50 to 00cd4d57 has its CatchHandler @ 00cd4e80 */
  Integer::Integer(this_02);
                    /* try { // try from 00cd4d5c to 00cd4d63 has its CatchHandler @ 00cd4e78 */
  Integer::Integer((Integer *)(this + 0x100));
                    /* try { // try from 00cd4d6c to 00cd4d73 has its CatchHandler @ 00cd4e70 */
  Integer::Integer((Integer *)(this + 0x130));
                    /* try { // try from 00cd4d78 to 00cd4d7f has its CatchHandler @ 00cd4e68 */
  Integer::Integer((Integer *)(this + 0x160));
                    /* try { // try from 00cd4d84 to 00cd4d8b has its CatchHandler @ 00cd4e60 */
  Integer::Integer((Integer *)(this + 400));
  if (param_4[0x68] == (ECPPoint)0x0) {
    Integer::operator=(pIVar2,(Integer *)(param_4 + 8));
    Integer::operator=(pIVar3,(Integer *)(param_4 + 0x38));
    pIVar2 = (Integer *)(**(code **)(**(long **)this + 0x78))();
    pIVar2 = (Integer *)Integer::operator=(this_00,pIVar2);
    Integer::operator=(this_01,pIVar2);
    Integer::operator=(this_02,param_2);
  }
  else {
                    /* try { // try from 00cd4da0 to 00cd4e3f has its CatchHandler @ 00cd4eb4 */
    pIVar1 = (Integer *)(**(code **)(**(long **)this + 0x78))();
    pIVar3 = (Integer *)Integer::operator=(pIVar3,pIVar1);
    pIVar2 = (Integer *)Integer::operator=(pIVar2,pIVar3);
    Integer::operator=(this_01,pIVar2);
    pIVar2 = (Integer *)(**(code **)(**(long **)this + 0x18))();
    pIVar2 = (Integer *)Integer::operator=(this_00,pIVar2);
    Integer::operator=(this_02,pIVar2);
  }
  return;
}


