--------------------------------------------------------
--  Fichier cr�� - samedi-mai-23-2020   
--------------------------------------------------------
DROP TABLE "BEJAOUI"."BONF";
DROP TABLE "BEJAOUI"."BONI";
DROP TABLE "BEJAOUI"."EMPLOYE";
DROP TABLE "BEJAOUI"."ETUDIANT";
DROP TABLE "BEJAOUI"."FOURN";
DROP TABLE "BEJAOUI"."MENUS";
DROP TABLE "BEJAOUI"."NOMEN";
DROP TABLE "BEJAOUI"."PRODUIT";
--------------------------------------------------------
--  DDL for Table BONF
--------------------------------------------------------

  CREATE TABLE "BEJAOUI"."BONF" 
   (	"PIC" VARCHAR2(20 BYTE), 
	"CODEF" VARCHAR2(20 BYTE), 
	"DATEBONF" VARCHAR2(20 BYTE), 
	"CODEP" VARCHAR2(20 BYTE), 
	"LIBELLE" VARCHAR2(50 BYTE), 
	"QTPROD" VARCHAR2(20 BYTE)
   ) PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table BONI
--------------------------------------------------------

  CREATE TABLE "BEJAOUI"."BONI" 
   (	"PIC" VARCHAR2(20 BYTE), 
	"DATEBONI" VARCHAR2(20 BYTE), 
	"CODEP" VARCHAR2(20 BYTE), 
	"LIBELLE" VARCHAR2(50 BYTE), 
	"QTPROD" VARCHAR2(20 BYTE)
   ) PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table EMPLOYE
--------------------------------------------------------

  CREATE TABLE "BEJAOUI"."EMPLOYE" 
   (	"NOM_EMPLOYE" VARCHAR2(20 BYTE), 
	"MDP_EMPLOYE" VARCHAR2(20 BYTE)
   ) PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table ETUDIANT
--------------------------------------------------------

  CREATE TABLE "BEJAOUI"."ETUDIANT" 
   (	"NOM" VARCHAR2(20 BYTE), 
	"ID" NUMBER, 
	"PRENOM" VARCHAR2(20 BYTE)
   ) PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table FOURN
--------------------------------------------------------

  CREATE TABLE "BEJAOUI"."FOURN" 
   (	"CODE" VARCHAR2(20 BYTE), 
	"ADR" VARCHAR2(100 BYTE), 
	"TEL" VARCHAR2(20 BYTE), 
	"REG" VARCHAR2(50 BYTE), 
	"FAX" VARCHAR2(20 BYTE), 
	"MAIL" VARCHAR2(100 BYTE), 
	"DAILLIV" VARCHAR2(30 BYTE), 
	"MODEPI" VARCHAR2(30 BYTE)
   ) PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table MENUS
--------------------------------------------------------

  CREATE TABLE "BEJAOUI"."MENUS" 
   (	"CODE" VARCHAR2(20 BYTE), 
	"NATURE" VARCHAR2(20 BYTE), 
	"DATEMENU" VARCHAR2(20 BYTE), 
	"QTPROD" VARCHAR2(20 BYTE), 
	"LIBELLE" VARCHAR2(20 BYTE)
   ) PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table NOMEN
--------------------------------------------------------

  CREATE TABLE "BEJAOUI"."NOMEN" 
   (	"CODE" NUMBER, 
	"CODECOMP" NUMBER, 
	"COEF" NUMBER, 
	"DATEN" VARCHAR2(20 BYTE)
   ) PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table PRODUIT
--------------------------------------------------------

  CREATE TABLE "BEJAOUI"."PRODUIT" 
   (	"CODE" VARCHAR2(20 BYTE), 
	"LIBELLE" VARCHAR2(50 BYTE), 
	"DATEPROD" VARCHAR2(20 BYTE), 
	"PRIX" NUMBER, 
	"QT" NUMBER, 
	"CATG" VARCHAR2(50 BYTE), 
	"FAMIL" VARCHAR2(50 BYTE)
   ) PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT)
  TABLESPACE "SYSTEM" ;
REM INSERTING into BEJAOUI.BONF
SET DEFINE OFF;
Insert into BEJAOUI.BONF (PIC,CODEF,DATEBONF,CODEP,LIBELLE,QTPROD) values ('df','458','mer. janv. 1 2020','525','df','d');
Insert into BEJAOUI.BONF (PIC,CODEF,DATEBONF,CODEP,LIBELLE,QTPROD) values ('526','1234','sam. janv. 1 2000','7452','dlf','kdf');
Insert into BEJAOUI.BONF (PIC,CODEF,DATEBONF,CODEP,LIBELLE,QTPROD) values ('526','1234','sam. janv. 1 2000','7452','dks','25');
Insert into BEJAOUI.BONF (PIC,CODEF,DATEBONF,CODEP,LIBELLE,QTPROD) values ('745','1234','sam. janv. 1 2000','7452','lfds','15');
Insert into BEJAOUI.BONF (PIC,CODEF,DATEBONF,CODEP,LIBELLE,QTPROD) values ('147','1234','sam. janv. 1 2000','7452','df','df');
Insert into BEJAOUI.BONF (PIC,CODEF,DATEBONF,CODEP,LIBELLE,QTPROD) values ('745','1234','sam. janv. 1 2000','7452','dsd','4');
Insert into BEJAOUI.BONF (PIC,CODEF,DATEBONF,CODEP,LIBELLE,QTPROD) values ('745','1234','sam. janv. 1 2000','5963','ldfk','4');
Insert into BEJAOUI.BONF (PIC,CODEF,DATEBONF,CODEP,LIBELLE,QTPROD) values ('745','1234','sam. janv. 1 2000','5963','d','4');
Insert into BEJAOUI.BONF (PIC,CODEF,DATEBONF,CODEP,LIBELLE,QTPROD) values ('748','785','sam. janv. 1 2000','751','uah','4');
Insert into BEJAOUI.BONF (PIC,CODEF,DATEBONF,CODEP,LIBELLE,QTPROD) values ('748','785','sam. janv. 1 2000','855','lkcs','k;x');
Insert into BEJAOUI.BONF (PIC,CODEF,DATEBONF,CODEP,LIBELLE,QTPROD) values ('748','785','sam. janv. 1 2000','7452','565','45');
Insert into BEJAOUI.BONF (PIC,CODEF,DATEBONF,CODEP,LIBELLE,QTPROD) values ('748','785','sam. janv. 1 2000','5963','l,dfsdk','ld');
REM INSERTING into BEJAOUI.BONI
SET DEFINE OFF;
Insert into BEJAOUI.BONI (PIC,DATEBONI,CODEP,LIBELLE,QTPROD) values ('896','sam. janv. 1 2000','7452','jqs','sk');
Insert into BEJAOUI.BONI (PIC,DATEBONI,CODEP,LIBELLE,QTPROD) values ('896','sam. janv. 1 2000','7452','jndj','zjd');
Insert into BEJAOUI.BONI (PIC,DATEBONI,CODEP,LIBELLE,QTPROD) values ('896','sam. janv. 1 2000','855','ss','r');
Insert into BEJAOUI.BONI (PIC,DATEBONI,CODEP,LIBELLE,QTPROD) values ('8454','sam. janv. 1 2000','855','fd','rkdf');
Insert into BEJAOUI.BONI (PIC,DATEBONI,CODEP,LIBELLE,QTPROD) values ('845','sam. janv. 1 2000','855','fd','rkdf');
Insert into BEJAOUI.BONI (PIC,DATEBONI,CODEP,LIBELLE,QTPROD) values (null,'sam. janv. 1 2000',null,null,null);
REM INSERTING into BEJAOUI.EMPLOYE
SET DEFINE OFF;
Insert into BEJAOUI.EMPLOYE (NOM_EMPLOYE,MDP_EMPLOYE) values ('arwa','0000');
Insert into BEJAOUI.EMPLOYE (NOM_EMPLOYE,MDP_EMPLOYE) values ('farah','1111');
Insert into BEJAOUI.EMPLOYE (NOM_EMPLOYE,MDP_EMPLOYE) values ('sarra','2222');
Insert into BEJAOUI.EMPLOYE (NOM_EMPLOYE,MDP_EMPLOYE) values ('iheb','3333');
Insert into BEJAOUI.EMPLOYE (NOM_EMPLOYE,MDP_EMPLOYE) values ('aziz','4444');
REM INSERTING into BEJAOUI.ETUDIANT
SET DEFINE OFF;
Insert into BEJAOUI.ETUDIANT (NOM,ID,PRENOM) values ('bejaoui','142','lamia');
Insert into BEJAOUI.ETUDIANT (NOM,ID,PRENOM) values ('lefi','1234','lamia');
Insert into BEJAOUI.ETUDIANT (NOM,ID,PRENOM) values ('beja','111','amen');
Insert into BEJAOUI.ETUDIANT (NOM,ID,PRENOM) values ('bejaoui','11','loulou');
REM INSERTING into BEJAOUI.FOURN
SET DEFINE OFF;
Insert into BEJAOUI.FOURN (CODE,ADR,TEL,REG,FAX,MAIL,DAILLIV,MODEPI) values ('52',null,null,'Tunis',null,null,null,'Cheque');
Insert into BEJAOUI.FOURN (CODE,ADR,TEL,REG,FAX,MAIL,DAILLIV,MODEPI) values ('458',null,null,'Tunis',null,null,null,'Cheque');
Insert into BEJAOUI.FOURN (CODE,ADR,TEL,REG,FAX,MAIL,DAILLIV,MODEPI) values ('785','hammalif','52512546','Nabeul','71586947','brahim.ferjeni','2 jours','traite');
Insert into BEJAOUI.FOURN (CODE,ADR,TEL,REG,FAX,MAIL,DAILLIV,MODEPI) values ('lerf','fd','df','Tunis','d',null,null,'Cheque');
Insert into BEJAOUI.FOURN (CODE,ADR,TEL,REG,FAX,MAIL,DAILLIV,MODEPI) values ('5214','kdf','lksc','Tunis',null,null,null,'Cheque');
REM INSERTING into BEJAOUI.MENUS
SET DEFINE OFF;
Insert into BEJAOUI.MENUS (CODE,NATURE,DATEMENU,QTPROD,LIBELLE) values ('785','Déj','sam. janv. 1 2000','5','569');
Insert into BEJAOUI.MENUS (CODE,NATURE,DATEMENU,QTPROD,LIBELLE) values ('55','Petit Déj','lun. janv. 7 2008','5','ld;fdl');
Insert into BEJAOUI.MENUS (CODE,NATURE,DATEMENU,QTPROD,LIBELLE) values ('159','Déj','1','1','ammouna');
Insert into BEJAOUI.MENUS (CODE,NATURE,DATEMENU,QTPROD,LIBELLE) values ('25','Déj','mer. janv. 1 2020',null,null);
Insert into BEJAOUI.MENUS (CODE,NATURE,DATEMENU,QTPROD,LIBELLE) values ('785','Déj','sam. janv. 1 2000','kk','45');
Insert into BEJAOUI.MENUS (CODE,NATURE,DATEMENU,QTPROD,LIBELLE) values ('7452','Déj','ven. nov. 6 2020','fv','fgv');
Insert into BEJAOUI.MENUS (CODE,NATURE,DATEMENU,QTPROD,LIBELLE) values ('624','Déj','sam. janv. 1 2000','45','TOMATO');
Insert into BEJAOUI.MENUS (CODE,NATURE,DATEMENU,QTPROD,LIBELLE) values ('55','Petit Déj','lun. janv. 7 2008','5','ld;fdl');
Insert into BEJAOUI.MENUS (CODE,NATURE,DATEMENU,QTPROD,LIBELLE) values ('444','Déj','sam. janv. 1 2000','4','kjfds');
Insert into BEJAOUI.MENUS (CODE,NATURE,DATEMENU,QTPROD,LIBELLE) values ('7452','Déj','jeu. janv. 13 2000','55','mldf');
Insert into BEJAOUI.MENUS (CODE,NATURE,DATEMENU,QTPROD,LIBELLE) values ('7452','Déj','jeu. janv. 13 2000','4','vd');
Insert into BEJAOUI.MENUS (CODE,NATURE,DATEMENU,QTPROD,LIBELLE) values ('525','Dinner','mer. janv. 5 2000','kl','5');
REM INSERTING into BEJAOUI.NOMEN
SET DEFINE OFF;
Insert into BEJAOUI.NOMEN (CODE,CODECOMP,COEF,DATEN) values ('852','52','2','dim. avr. 1 2001');
REM INSERTING into BEJAOUI.PRODUIT
SET DEFINE OFF;
Insert into BEJAOUI.PRODUIT (CODE,LIBELLE,DATEPROD,PRIX,QT,CATG,FAMIL) values ('444','j,ds','sam. janv. 1 2000','4','6','Matiére premiére','Légumes');
Insert into BEJAOUI.PRODUIT (CODE,LIBELLE,DATEPROD,PRIX,QT,CATG,FAMIL) values ('525','gff','sam. janv. 1 2000','4','4','Matiére premiére','Légumes');
Insert into BEJAOUI.PRODUIT (CODE,LIBELLE,DATEPROD,PRIX,QT,CATG,FAMIL) values ('11','jdncdjx','sam. janv. 1 2000','4','25','Matiére premiére','Légumes');
Insert into BEJAOUI.PRODUIT (CODE,LIBELLE,DATEPROD,PRIX,QT,CATG,FAMIL) values ('55','dfd','sam. janv. 1 2000','0','50','Matiére premiére','Légumes');
Insert into BEJAOUI.PRODUIT (CODE,LIBELLE,DATEPROD,PRIX,QT,CATG,FAMIL) values ('7452','POTATO','sam. janv. 1 2000','5','44','Produit fini','Légumes');
Insert into BEJAOUI.PRODUIT (CODE,LIBELLE,DATEPROD,PRIX,QT,CATG,FAMIL) values ('5963','ldf','sam. janv. 1 2000','7','2','Produit fini','Légumes');
--------------------------------------------------------
--  DDL for Index ETUDIANT_PK
--------------------------------------------------------

  CREATE UNIQUE INDEX "BEJAOUI"."ETUDIANT_PK" ON "BEJAOUI"."ETUDIANT" ("ID") 
  PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  Constraints for Table ETUDIANT
--------------------------------------------------------

  ALTER TABLE "BEJAOUI"."ETUDIANT" ADD CONSTRAINT "ETUDIANT_PK" PRIMARY KEY ("ID")
  USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT)
  TABLESPACE "SYSTEM"  ENABLE;
 
  ALTER TABLE "BEJAOUI"."ETUDIANT" MODIFY ("ID" NOT NULL ENABLE);
--------------------------------------------------------
--  Constraints for Table FOURN
--------------------------------------------------------

  ALTER TABLE "BEJAOUI"."FOURN" MODIFY ("CODE" NOT NULL ENABLE);
--------------------------------------------------------
--  Constraints for Table MENUS
--------------------------------------------------------

  ALTER TABLE "BEJAOUI"."MENUS" MODIFY ("NATURE" NOT NULL ENABLE);
 
  ALTER TABLE "BEJAOUI"."MENUS" MODIFY ("DATEMENU" NOT NULL ENABLE);
--------------------------------------------------------
--  Constraints for Table NOMEN
--------------------------------------------------------

  ALTER TABLE "BEJAOUI"."NOMEN" MODIFY ("CODE" NOT NULL ENABLE);
 
  ALTER TABLE "BEJAOUI"."NOMEN" MODIFY ("CODECOMP" NOT NULL ENABLE);
