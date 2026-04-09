// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SaveVRML2
// Entry Point: 00d53f68
// Size: 4224 bytes
// Signature: undefined __thiscall SaveVRML2(TMMesh * this, basic_ofstream * param_1, Material * param_2)


/* HACD::TMMesh::SaveVRML2(std::__ndk1::basic_ofstream<char, std::__ndk1::char_traits<char> >&,
   HACD::Material const&) */

undefined8 __thiscall
HACD::TMMesh::SaveVRML2(TMMesh *this,basic_ofstream *param_1,Material *param_2)

{
  long lVar1;
  char cVar2;
  basic_ostream *pbVar3;
  long *plVar4;
  double *pdVar5;
  long lVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  id aiStack_70 [8];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x80) != 0) {
    dVar8 = *(double *)(this + 0x18);
    uVar7 = *(ulong *)(this + 0x58);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"#VRML V2.0 utf8",0xf);
    std::__ndk1::ios_base::getloc();
    plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar4 + 0x38))(plVar4,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar3);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"",0);
    std::__ndk1::ios_base::getloc();
    plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar4 + 0x38))(plVar4,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar3);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"# Vertices: ",0xc);
    cVar2 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,(ulong)dVar8);
    std::__ndk1::ios_base::getloc();
    plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar4 + 0x38))(plVar4,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar2);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"# Triangles: ",0xd);
    cVar2 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,uVar7);
    std::__ndk1::ios_base::getloc();
    plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar4 + 0x38))(plVar4,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar2);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"",0);
    std::__ndk1::ios_base::getloc();
    plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar4 + 0x38))(plVar4,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar3);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"Group {",7);
    std::__ndk1::ios_base::getloc();
    plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar4 + 0x38))(plVar4,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar3);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"\tchildren [",0xb);
    std::__ndk1::ios_base::getloc();
    plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar4 + 0x38))(plVar4,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar3);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"\t\tShape {",9);
    std::__ndk1::ios_base::getloc();
    plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar4 + 0x38))(plVar4,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar3);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"\t\t\tappearance Appearance {",0x1a);
    std::__ndk1::ios_base::getloc();
    plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar4 + 0x38))(plVar4,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar3);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"\t\t\t\tmaterial Material {",0x17);
    std::__ndk1::ios_base::getloc();
    plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar4 + 0x38))(plVar4,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar3);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"\t\t\t\t\tdiffuseColor ",0x12);
    pbVar3 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                        *(double *)param_2);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar3," ",1);
    pbVar3 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                        *(double *)(param_2 + 8));
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar3," ",1);
    cVar2 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                       *(double *)(param_2 + 0x10));
    std::__ndk1::ios_base::getloc();
    plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar4 + 0x38))(plVar4,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar2);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"\t\t\t\t\tambientIntensity ",0x16);
    cVar2 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                       *(double *)(param_2 + 0x18));
    std::__ndk1::ios_base::getloc();
    plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar4 + 0x38))(plVar4,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar2);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"\t\t\t\t\tspecularColor ",0x13);
    pbVar3 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                        *(double *)(param_2 + 0x20));
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar3," ",1);
    pbVar3 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                        *(double *)(param_2 + 0x28));
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar3," ",1);
    cVar2 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                       *(double *)(param_2 + 0x30));
    std::__ndk1::ios_base::getloc();
    plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar4 + 0x38))(plVar4,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar2);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"\t\t\t\t\temissiveColor ",0x13);
    pbVar3 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                        *(double *)(param_2 + 0x38));
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar3," ",1);
    pbVar3 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                        *(double *)(param_2 + 0x40));
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar3," ",1);
    cVar2 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                       *(double *)(param_2 + 0x48));
    std::__ndk1::ios_base::getloc();
    plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar4 + 0x38))(plVar4,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar2);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"\t\t\t\t\tshininess ",0xf);
    cVar2 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                       *(double *)(param_2 + 0x50));
    std::__ndk1::ios_base::getloc();
    plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar4 + 0x38))(plVar4,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar2);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"\t\t\t\t\ttransparency ",0x12);
    cVar2 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                       *(double *)(param_2 + 0x58));
    std::__ndk1::ios_base::getloc();
    plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar4 + 0x38))(plVar4,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar2);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"\t\t\t\t}",5);
    std::__ndk1::ios_base::getloc();
    plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar4 + 0x38))(plVar4,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar3);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"\t\t\t}",4);
    std::__ndk1::ios_base::getloc();
    plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar4 + 0x38))(plVar4,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar3);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"\t\t\tgeometry IndexedFaceSet {",0x1c);
    std::__ndk1::ios_base::getloc();
    plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar4 + 0x38))(plVar4,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar3);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"\t\t\t\tccw TRUE",0xc);
    std::__ndk1::ios_base::getloc();
    plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar4 + 0x38))(plVar4,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar3);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"\t\t\t\tsolid TRUE",0xe);
    std::__ndk1::ios_base::getloc();
    plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar4 + 0x38))(plVar4,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar3);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"\t\t\t\tconvex TRUE",0xf);
    std::__ndk1::ios_base::getloc();
    plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar4 + 0x38))(plVar4,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar3);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    if (*(long *)(this + 0x18) != 0) {
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)param_1,"\t\t\t\tcoord DEF co Coordinate {",0x1d);
      std::__ndk1::ios_base::getloc();
      plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
      (**(code **)(*plVar4 + 0x38))(plVar4,10);
      std::__ndk1::locale::~locale((locale *)aiStack_70);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar3);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)param_1,"\t\t\t\t\tpoint [",0xc);
      std::__ndk1::ios_base::getloc();
      plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
      (**(code **)(*plVar4 + 0x38))(plVar4,10);
      std::__ndk1::locale::~locale((locale *)aiStack_70);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar3);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
      if (dVar8 != 0.0) {
        dVar9 = 0.0;
        do {
          pdVar5 = *(double **)(this + 0x10);
          pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             ((basic_ostream *)param_1,"\t\t\t\t\t\t",6);
          pbVar3 = (basic_ostream *)
                   std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                             ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,*pdVar5);
          pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar3," ",1);
          pbVar3 = (basic_ostream *)
                   std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                             ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,pdVar5[1]
                             );
          pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar3," ",1);
          pbVar3 = (basic_ostream *)
                   std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                             ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,pdVar5[2]
                             );
          pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar3,",",1);
          std::__ndk1::ios_base::getloc();
          plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
          (**(code **)(*plVar4 + 0x38))(plVar4,10);
          std::__ndk1::locale::~locale((locale *)aiStack_70);
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar3);
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
          pdVar5[4] = dVar9;
          if (*(long *)(this + 0x18) != 0) {
            *(undefined8 *)(this + 0x10) = *(undefined8 *)(*(long *)(this + 0x10) + 0x38);
          }
          dVar9 = (double)((long)dVar9 + 1);
        } while (dVar8 != dVar9);
      }
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)param_1,"\t\t\t\t\t]",6);
      std::__ndk1::ios_base::getloc();
      plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
      (**(code **)(*plVar4 + 0x38))(plVar4,10);
      std::__ndk1::locale::~locale((locale *)aiStack_70);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar3);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)param_1,"\t\t\t\t}",5);
      std::__ndk1::ios_base::getloc();
      plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
      (**(code **)(*plVar4 + 0x38))(plVar4,10);
      std::__ndk1::locale::~locale((locale *)aiStack_70);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar3);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    }
    if (*(long *)(this + 0x58) != 0) {
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)param_1,"\t\t\t\tcoordIndex [ ",0x11);
      std::__ndk1::ios_base::getloc();
      plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
      (**(code **)(*plVar4 + 0x38))(plVar4,10);
      std::__ndk1::locale::~locale((locale *)aiStack_70);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar3);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        lVar6 = *(long *)(this + 0x50);
        pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           ((basic_ostream *)param_1,"\t\t\t\t\t\t",6);
        pbVar3 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                            *(ulong *)(*(long *)(lVar6 + 0x20) + 0x20));
        pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar3,", ",2);
        pbVar3 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                            *(ulong *)(*(long *)(lVar6 + 0x28) + 0x20));
        pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar3,", ",2);
        pbVar3 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                            *(ulong *)(*(long *)(lVar6 + 0x30) + 0x20));
        pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar3,", -1,",5);
        std::__ndk1::ios_base::getloc();
        plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
        (**(code **)(*plVar4 + 0x38))(plVar4,10);
        std::__ndk1::locale::~locale((locale *)aiStack_70);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar3);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
        if (*(long *)(this + 0x58) != 0) {
          *(undefined8 *)(this + 0x50) = *(undefined8 *)(*(long *)(this + 0x50) + 0xd8);
        }
      }
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)param_1,"\t\t\t\t]",5);
      std::__ndk1::ios_base::getloc();
      plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
      (**(code **)(*plVar4 + 0x38))(plVar4,10);
      std::__ndk1::locale::~locale((locale *)aiStack_70);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar3);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    }
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"\t\t\t}",4);
    std::__ndk1::ios_base::getloc();
    plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar4 + 0x38))(plVar4,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar3);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"\t\t}",3);
    std::__ndk1::ios_base::getloc();
    plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar4 + 0x38))(plVar4,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar3);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"\t]",2);
    std::__ndk1::ios_base::getloc();
    plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar4 + 0x38))(plVar4,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar3);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)param_1,"}",1);
    std::__ndk1::ios_base::getloc();
    plVar4 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar4 + 0x38))(plVar4,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar3);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


