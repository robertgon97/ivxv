.. Elektroonilise hääletamise infosüsteem IVXV

.. None

.. SEE FAIL ON GENEREERITUD AUTOMAATTESTI POOLT:
.. * steps/test_util/report.py

..  Feature: Kogumisteenuse käivitamine kõrgkäideldava konfiguratsiooniga
             features/collector-ha-setup.feature:6
   Scenario: Kogumisteenuse tehniliste seadistuste rakendamine
             features/collector-ha-setup.feature:366
       Step: Haldur määrab haldusteenuses kasutajale "TRUMM,KAPTEN,33333333333" rolli "election-conf-manager"
             features/collector-ha-setup.feature:405

.. code-block:: text

   ivxv-admin@admin $ ivxv-cmd-load user /output/voting/HA-SETUP/config/user-TRUMM,KAPTEN,33333333333-election-conf-manager.bdoc
   INFO: Config file is signed by: ORAV,IVAN,30809010001 2019-01-25T14:35:53Z
   INFO: User ORAV,IVAN,30809010001 with role "admin" is authorized to execute "user" commands
   INFO: Using signature "ORAV,IVAN,30809010001 2019-01-25T14:35:53Z" as config file version
   INFO: Config file version is "ORAV,IVAN,30809010001 2019-01-25T14:35:53Z"
   INFO: Loading command "user permissions configuration" from file /output/voting/HA-SETUP/config/user-TRUMM,KAPTEN,33333333333-election-conf-manager.bdoc
   command_file:INFO: Loading command file "/output/voting/HA-SETUP/config/user-TRUMM,KAPTEN,33333333333-election-conf-manager.bdoc" (user permissions configuration)
   command_file:INFO: Validating user permissions configuration
   command_file:INFO: Files in user permissions configuration package are valid
   INFO: User permissions configuration file loaded successfully
   INFO: Resetting user "TRUMM,KAPTEN,33333333333" permissions
   lib:INFO: Creating Apache Web Server user permission file /var/lib/ivxv/admin-ui-permissions/TRUMM,KAPTEN,33333333333-election-conf-manager