.. Elektroonilise hääletamise infosüsteem IVXV

.. None

.. SEE FAIL ON GENEREERITUD AUTOMAATTESTI POOLT:
.. * steps/test_util/report.py

..  Feature: Kogumisteenuse käivitamine kõrgkäideldava konfiguratsiooniga
             features/collector-ha-setup.feature:6
   Scenario: Kogumisteenuse tehniliste seadistuste rakendamine
             features/collector-ha-setup.feature:366
       Step: Haldur laadib haldusteenusesse kogumisteenuse tehnilised seadistused
             features/collector-ha-setup.feature:386

.. code-block:: text

   ivxv-admin@admin $ ivxv-cmd-load technical /output/voting/HA-SETUP/config/HA-SETUP.technical.bdoc
   INFO: Config file is signed by: ROPKA,KIVIVALVUR,32608320001 2019-01-25T14:30:17Z
   INFO: User ROPKA,KIVIVALVUR,32608320001 with role "admin" is authorized to execute "technical" commands
   INFO: Using signature "ROPKA,KIVIVALVUR,32608320001 2019-01-25T14:30:17Z" as config file version
   INFO: Config file version is "ROPKA,KIVIVALVUR,32608320001 2019-01-25T14:30:17Z"
   INFO: Loading command "collectors technical configuration" from file /output/voting/HA-SETUP/config/HA-SETUP.technical.bdoc
   command_file:INFO: Loading command file "/output/voting/HA-SETUP/config/HA-SETUP.technical.bdoc" (collectors technical configuration)
   command_file:INFO: Validating collectors technical configuration
   command_file:INFO: Files in collectors technical configuration package are valid
   lib:INFO: Registering new service backup@backup.ivxv.ee in management service
   lib:INFO: Registering new service choices@choices1.ivxv.ee in management service
   ...
   lib:INFO: Registering new service voting@voting2.ivxv.ee in management service
   lib:INFO: Registering new service voting@voting3.ivxv.ee in management service
   lib:INFO: Registering new service host backup in management service
   lib:INFO: Registering new service host ivxv1 in management service
   lib:INFO: Registering new service host ivxv2 in management service
   lib:INFO: Registering new service host ivxv3 in management service
   lib:INFO: Registering new service host log1 in management service
   INFO: Collectors technical configuration file loaded successfully
   INFO: Collectors technical configuration file is registered in management service